import rclpy
from geometry_msgs.msg import Point, PointStamped
from tf2_ros.transform_listener import TransformListener
from tf2_ros.buffer import Buffer
from tf2_ros import TransformException
from pyquaternion import Quaternion

class PointEx:
    def __init__(self, *val):
        self.time = rclpy.time.Time()
        self.offset = Point()
        num_arg = len(val)
        self.valid = False
        if num_arg == 1:
            arg = val[0]
            if isinstance(arg, list) or isinstance(arg, tuple): # list or tuple
                self.init_by_array(arg)
            else:
                if hasattr(arg, 'x'):
                    self.init_by_attr(arg)
                else:
                    raise Exception('type error')
        elif num_arg == 0:
            self._x = 0.0
            self._y = 0.0
            self._z = 0.0
        else:
            self.init_by_array(val)
    
    def init_by_array(self, arg):
        self._x = float(arg[0])
        if len(arg) >= 2:
            self._y = float(arg[1])
        else:
            self._y = float(0)
        if len(arg) >= 3:
            self._z = float(arg[2])
        else:
            self._z = float(0)
    
    def init_by_attr(self, arg):
        self._x = float(arg.x)
        if hasattr(arg, 'y'):
            self._y = float(arg.y)
        else:
            self._y = float(0)
        if hasattr(arg, 'z'):
            self._z = float(arg.z)
        else:
            self._z = float(0)
    
    def getPointStamped(self):
        ret = PointStamped()
        ret.header.stamp = self.time
        ret.point.x = self.x
        ret.point.y = self.y
        ret.point.z = self.z
        return ret
    
    def getPoint(self):
        ret = Point()
        ret.x = self.x
        ret.y = self.y
        ret.z = self.z
        return ret
    
    def setTransform(self, trans):
        self.transform = trans
        offset = trans.translation
        rot = trans.rotation
        point = (self._x, self._y, self._z)
        q_rot = Quaternion(rot.w, rot.x, rot.y, rot.z)
        rot_point = q_rot.rotate(point)
#        print(f'angle:{q_rot.radians} rot_point{rot_point}')
        self.x = rot_point[0] + offset.x
        self.y = rot_point[1] + offset.y
        self.z = rot_point[2] + offset.z
        self.valid = True

class PointBag:
    def __init__(self, first) -> None:
        self.points = set()
        self.points.add(first)
        self.count = 1
        self.x_sum = first.x
        self.y_sum = first.y
        self.z_sum = first.z
        self.x = first.x
        self.y = first.y
        self.z = first.z
        self.location = first.transform
        self.last_point = first
    
    def append(self, point):
        self.points.add(point)
        
        self.last_point = point
        self.location = point.transform
        new_count = len(self.points)
        if new_count != self.count:
            self.x_sum += point.x
            self.y_sum += point.y
            self.z_sum += point.z
            self.x = self.x_sum / new_count
            self.y = self.y_sum / new_count
            self.z = self.z_sum / new_count
            self.count = new_count

    def clear(self):
        self.points.clear()

