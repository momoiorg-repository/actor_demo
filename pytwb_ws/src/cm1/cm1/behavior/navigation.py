import py_trees

from pytwb.common import behavior
from lib.actor_bt import ActorBT

@behavior
class GetLocation(py_trees.behaviour.Behaviour):
    desc = 'Gets a location pose from the pose list'

    def __init__(self, name):
        super(GetLocation, self).__init__(name)
        self.bb = py_trees.blackboard.Blackboard()

    def update(self):
        """ Checks for the status of the navigation action """
        pose_list = self.bb.get("pose_list")
        if len(pose_list) == 0:
            self.logger.info("No locations available")
            return py_trees.common.Status.FAILURE
        else:
            target_pose = pose_list.pop()
            if not target_pose:
                return py_trees.common.Status.FAILURE
            self.logger.info(f"Selected location x:{target_pose[0]},x:{target_pose[1]}")
            self.bb.set("target_pose", target_pose)
            if self.bb.exists('commander'):
                self.bb.get('commander').report(self.name, target_pose)
            return py_trees.common.Status.SUCCESS

    def terminate(self, new_status):
        self.logger.info(f"Terminated with status {new_status}")
    
@behavior
class GoToPose(ActorBT):
    desc = 'actual move action'
    
    def __init__(self, name, node):
        super(GoToPose, self).__init__(name, 'navigate')
        self.bb = py_trees.blackboard.Blackboard()
    
    def initialise(self):
        target_pose = None
        # Check if there is a pose available in the blackboard
        if self.bb.exists("target_pose"):
            target_pose = self.bb.get("target_pose")
        self.pose = target_pose
        x, y, theta = self.pose
        self.logger.info(f"Going to [x: {x}, y: {y}, theta: {theta}] ...")
        if not target_pose:
            return
        self.shared.set_callee([('goto', (x, y, theta))])
        super().initialise()
    