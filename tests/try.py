from heuristic import Point, Track
import math
import matplotlib.pyplot as plt

p1 = Point(1, 1)
p2 = Point(7, 1)

p3 = Point(4, 2.5)


t = Track(p1, p2)

# Plotting main Track 
plt.scatter([p1.x, p2.x], [p1.y, p2.y])
plt.plot([t.startpoint.x, t.endpoint.x], [t.startpoint.y, t.endpoint.y])

plt.scatter(p3.x, p3.y)

plt.show()

print(t.pitch(p3))