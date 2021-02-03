from heuristic import Point, Track
import matplotlib.pyplot as plt

# --------------------------------------------------------
# Creating two points that will represent the start- and
# endpoint of a Track.
# --------------------------------------------------------
p1 = Point(0, 0)
p2 = Point(5, 0)

# --------------------------------------------------------
# Points can be printed and will be displayed in the form
# "Point(x, y)".
# -------------------------------------------------------- 
print("These are our two created points. Point 1: {}, and Point 2: {}".format(p1, p2))
print()

# --------------------------------------------------------
# Creating an instance of the class Track by using the 
# previously created points p1 and p2.
# -------------------------------------------------------- 
t = Track(p1, p2)

# --------------------------------------------------------
# Track can also be printed and will be displayed in the
# form "Track(angle: t, distance: s)".
# -------------------------------------------------------- 
print("This is a track: {}".format(t))
print()

# --------------------------------------------------------
# Lets create a third point here and print it as well.
# -------------------------------------------------------- 
p3 = Point(2, 2)
print("And this is Point 3: {}".format(p3))
print()

# --------------------------------------------------------
# Using the t.pitch function with point 3 returns the
# predicted pitch for point 3.
# -------------------------------------------------------- 
pitch = t.pitch(p3)
print("The pitch on point 3 was calculated to be {}".format(pitch))

