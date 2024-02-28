import py_trees

from pytwb.common import behavior
from ros_actor import get_value

#
## decide visit points based on information from vector map
#
@behavior
class SetLocations(py_trees.behaviour.Behaviour):
    desc = 'create candidates of visit locations by vector map'
    
    def __init__(self, name):
        super(SetLocations, self).__init__(name)
    
    def initialise(self) -> None:
        bb = py_trees.blackboard.Blackboard()
        self.bb = bb
        world = get_value('world')
        r = world.get_root_region()
        self.region = r
        pose_list = []
        for sr in r.get_subregions():
            c = sr.get_weight_center()
            pose_list.append([float(c.x), float(c.y), 0])
        bb.set("pose_list", pose_list)

    def update(self):
        return py_trees.common.Status.SUCCESS
