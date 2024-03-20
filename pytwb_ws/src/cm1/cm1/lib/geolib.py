import math
from sympy import Point, Circle, Line, Symbol, solve

def get_approach_pose(region, point, current):
    if not isinstance(point, Point):
        point = Point(float(point.x), float(point.y))
    current_point = Point(float(current.translation.x), float(current.translation.y))
    near_boundaries = region.get_near_boundaries(point, thresh=0.5)
    points = 0
    i_x = 0.0
    i_y = 0.0
    if near_boundaries:
        for b in near_boundaries:
            for ip in b[1].segment.intersect(Circle(point, 1)):
                i_x += ip.x
                i_y += ip.y
                points += 1
    if points <= 0:
        approach_line = Line(point, current_point)
    else:
        approach_line = Line(point, Point(i_x/points, i_y/points))
    t = Symbol("t")
    px = approach_line.arbitrary_point(parameter=t)
    f = solve(approach_line.p1.distance(px)-0.6, t)
    first = True
    for cand_t in f:
        cand = px.subs(t, cand_t).evalf()
        d = float(current_point.distance(cand))
        if first:
            first = False
            min_distance = d
            pos = cand
        elif d < min_distance:
            min_distance = d
            pos = cand
    if pos.x > 6 or pos.x < -2 or pos.y > 4 or pos.y < -2:
        print('illegal position')
    return get_pose(pos, point)

def get_pose(p1, p2):
    rot = math.atan2(p2.y-p1.y, p2.x-p1.x)
    '''
    dbg_mes = {
        'p1.x': float(p1.x),
        'p1.y': float(p1.y),
        'p2.x': float(p2.x),
        'p2.y': float(p2.y)-0.3,
        'angle': math.degrees(rot)
    }
    run_actor('dbg_show', dbg_mes)
    '''
    return (float(p1.x), float(p1.y), float(rot))
