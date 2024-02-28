from math import radians, degrees, atan2

from ros_actor import actor, SubNet
from ..pointlib import PointEx
from geometry_msgs.msg import Twist

SPEED = 0.1
TURN = 0.3

class ApproachAction(SubNet):
    def move(self, dir=1, turn=0):
        twist = Twist()
        twist.linear.x = SPEED * dir
        twist.linear.y = 0.0
        twist.linear.z = 0.0
        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = TURN * turn
        self.run_actor('motor', twist)
    
    # direct command to motor
    @actor    
    def mini_walk(self, len=5):
        if len == 0:
            self.move(0)
            return
        if len > 0:
            self.move(1)
        else:
            self.move(-1)
            len = -len
        self.run_actor('sleep', len*0.1)
        self.move(0, 0)
    
    @actor    
    def mini_turn(self, len=5):
        if len == 0:
            self.move(0, 0)
            return
        if len > 0:
            self.move(0, 1)
        else:
            self.move(0, -1)
            len = -len
        self.run_actor('sleep', len*0.1)
        self.move(0)
    
    # adjust location
    @actor
    def shift(self, target):
        _, _, _, distance = self.run_actor('measure_center')
        len = distance - target
        if len < 0.005: return True
        trans = self.run_actor('map_trans')
        start = PointEx(0.0, 0.0)
        start.setTransform(trans.transform)
        dest = PointEx(len, 0.0)
        dest.setTransform(trans.transform)
        self.run_actor('mini_walk', len*164)
        self.run_actor('sleep', 3)
        trans = self.run_actor('map_trans')
        actual = PointEx(0.0, 0.0)
        actual.setTransform(trans.transform)
        dx = actual.x - start.x
        dy = actual.y - start.y
        dir = atan2(dy, dx)
        self.run_actor('goto', actual.x, actual.y, dir)
        return True        
    
    # approach target with visual feedback
    @actor
    def approach(self, target=0.20):
        trans = self.run_actor('map_trans')
        start = PointEx(0.0, 0.0)
        start.setTransform(trans.transform)
        self.move(1)
        with self.run_actor_mode('measure_distance', 'iterator', 'bar') as obj_it:
            for distance in obj_it:
                if distance <= target: break 
        self.move(0)
        self.run_actor('sleep', 5)
        trans = self.run_actor('map_trans')
        actual = PointEx(0.0, 0.0)
        actual.setTransform(trans.transform)
        dx = actual.x - start.x
        dy = actual.y - start.y
        dir = atan2(dy, dx)
        self.run_actor('goto', actual.x, actual.y, dir)
    
    # adjust body angle
    @actor
    def face(self, raw=0):
        root = PointEx()
        trans = self.run_actor('map_trans', 'base_link')
        if not trans:
            print('trans error')
            return False
        root.setTransform(trans.transform)
        x, y, rel_angle = self.run_actor('object_loc', 'base_link')
        target = PointEx(x, y)
        target.setTransform(trans.transform)
        dx = target.x - root.x
        dy = target.y - root.y
        abs_angle = atan2(dy, dx)
        dangle = degrees(rel_angle)
        dangle *= 0.985
        self.run_actor('mini_turn', dangle)
        self.run_actor('goto', root.x, root.y, abs_angle)
        '''
        print(f'raw x:{x}, y:{y}')
        print(f'map x:{target.x}, y:{target.y}')
        print(f'root x:{root.x}, y:{root.y}')
        print(f'diff x:{dx}, y:{dy}')
        print(f'move:{degrees(abs_angle)}')
        '''
        return True
