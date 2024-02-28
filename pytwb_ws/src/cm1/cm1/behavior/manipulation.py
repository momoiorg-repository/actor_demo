import py_trees

from pytwb.common import behavior

from lib.actor_bt import ActorBT

@behavior
class Adjust(ActorBT):
    desc = 'adjust arm angle'

    def __init__(self, name, node):
        super().__init__(name, 'ad')

@behavior
class Fit(ActorBT):
    desc = 'adjust arm angle after gripper down'

    def __init__(self, name, node):
        super().__init__(name, 'fit')

@behavior
class Pick(ActorBT):
    desc = 'pick object'

    def __init__(self, name, node):
        super().__init__(name, 
            (
                ('open', None),
                ('pick', None)
            )
        )

@behavior
class Place(ActorBT):
    desc = 'place object'

    def __init__(self, name, node):
        super().__init__(name, 'place')

@behavior
class Open(ActorBT):
    desc = 'gripper open'

    def __init__(self, name, node):
        super().__init__(name, 'open')
        
@behavior
class ArmHome(ActorBT):
    desc = 'set arm home position'

    def __init__(self, name, node):
#        super().__init__(name, 'home')
        super().__init__(name, 
            (
                ('sleep', (1,)),
                ('home', None)
            )
        )
        
        
# add
@behavior
class Close(ActorBT):
    desc = 'place object'

    def __init__(self, name, node):
        super().__init__(name, 'close')