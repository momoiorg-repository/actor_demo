from pytwb.common import behavior
from lib.actor_bt import ActorBT

@behavior
class ObjectLocation(ActorBT):
    desc = 'print object location'

    def __init__(self, name, node):
        super().__init__(name, 'ol')

@behavior
class Generic(ActorBT):
    desc = 'generic actor'

    def __init__(self, name, node, actor, *args):
        super().__init__(name, actor, *args)

@behavior
class Sleep(ActorBT):
    desc = 'sleep'

    def __init__(self, name, node, time):
        super().__init__(name, "sleep", time)
        
@behavior
class Generic(ActorBT):
    desc = 'generic actor'

    def __init__(self, name, node, actor, **args):
        super().__init__(name, actor, **args)