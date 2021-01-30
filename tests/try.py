from heuristic import Point, Track


p1 = Point(0, 0)
p2 = Point(3, 3)

p3 = Point(1,3)


t = Track(p1, p2)

print(t.pitch(p3))
