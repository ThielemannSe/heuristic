from heuristic import Point, Track


p1 = Point(0, 0)
p2 = Point(-3, 3)

p3 = Point(1, -2)


t = Track(p2, p1)

print(t.angle(p1, p2))