import array
import operator
from math import radians, atan2, degrees

from ros_actor import actor, SubNet

adjust_plus = 1.1  
adjust_minus = 0.9
  
class ManipulatorNetwork(SubNet):
    # set to home position
    @actor
    def home(self):
        return self.run_actor('move_joint', 0.0, 0.0, 0.0, 0.0)

    @actor    
    def move_joint(self, *joint_values):
        joint_positions = array.array('d', joint_values)
        node = self.get_value('node')
        node.get_logger().info(f"Moving to {{joint_positions: {list(joint_positions)}}}")
        res = self.run_actor("move_to_configuration", joint_positions)
#        state = self.arm.joint_state
        self.set_value('joint_stat', joint_values)
        return res
    
    # joint angle in degree units
    @actor
    def move_joint_degree(self, *args):
        return self.move_joint(*list(map(radians, args)))

    # designate diff value of each joint
    @actor
    def adjust_joint(self, *args):
        value = self.get_value('joint_stat')
        off = list(map(radians, args))
        return self.move_joint(*list(map(operator.add, value, off)))

    @actor
    def adjust_joint_radian(self, *args):
        value = self.get_value('joint_stat')
        return self.move_joint(*list(map(operator.add, value, *args)))

    def move_position(self, position, orientation):
        position = array.array('d', position)
        orientation = array.array('d', orientation)
        self.node.get_logger().info(
            f"Moving to {{position: {list(position)}, quat_xyzw: {list(orientation)}}}"
        )
        self.run_actor('move_to_pose', position=position, quat_xyzw=orientation)
    
    # move arm and wait until done
    @actor
    def move_to_configuration(self, joint_positions):
        arm = self.get_value('arm')
        arm.move_to_configuration(joint_positions, joint_names=arm.joint_names)
        return arm.wait_until_executed()
    
    # open gripper
    @actor
    def open(self):
        self.run_actor('open_gripper')
        self.run_actor('sleep', 2)

    # close gripper
    @actor
    def close(self):
        self.run_actor('close_gripper')
        self.run_actor('sleep', 2)

    @actor
    def open_gripper(self):
        gripper = self.get_value('gripper')
        gripper.open()
        gripper.wait_until_executed()
   
    @actor
    def close_gripper(self):
        gripper = self.get_value('gripper')
        gripper.close()
        gripper.wait_until_executed()

    @actor
    def get_status(self):
        return {
            'joint': self.get_value('joint_stat')
        }
    
    '''
def get_joint_state(*args):
    robot = get_robot_interface()
    jstate = robot.cognitive_engine.get_joint_state()
    name = jstate.name
    value = jstate.position
    table = {}
    for i in range(len(name)):
        table[name[i]] = value[i]
    if len(args) > 1:
        for t in ['joint1', 'joint2', 'joint3', 'joint4']:
            print(f'{t}: {table[t]}')
    return table
    '''

    # adjust arm angle
    @actor
    def ad(self):
        x, y, angle = self.run_actor('object_loc')
#        da = degrees(angle)
        if angle > 0:
            angle *= adjust_plus
        else:
            angle *= adjust_minus
#        print(f'org angle: {da}, adjust: {degrees(angle)}')
        cur = list(self.get_value('joint_stat'))
        cur[0] = angle
        self.run_actor('move_joint', *cur)
        self.run_actor('sleep', 1)
        return True
    
    # adjust arm direction to the center of coke can
    @actor
    def fit(self):
        _, _, angle, distance = self.run_actor('measure_center')
#        da = degrees(angle)
#        print(f'org angle: {da}, adjust: {degrees(angle)}, distance: {distance}')
        cur = list(self.get_value('joint_stat'))
        cur[0] = angle
        self.run_actor('move_joint', *cur)
        self.run_actor('sleep', 1)
        return True

    # set arm to pick position
    @actor
    def pick(self, *arg):
        # angle = [
        #     0,
        #     66,
        #     -10,
        #     -59
        # ]
        angle = [
            0,
            83,
            -40,
            -42
        ]
        value = self.get_value('joint_stat')
        r_angle = list(map(radians, angle))
        r_angle[0] = value[0]
        self.run_actor('move_joint', *r_angle)
        self.run_actor('sleep', 3.0)
        return True
    
    # set arm to place position
    @actor
    def place(self):
        val = (0.0, 50.0, -33.0, -16.0)
        self.run_actor('move_joint', *map(radians, val))
        return self.run_actor('open')

