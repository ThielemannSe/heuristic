import unittest
import heuristic
import random
import math

class TestPointClass(unittest.TestCase):

    def setUp(self):
        # Point 1
        self.x1 = random.uniform(-1000, 1000)
        self.y1 = random.uniform(-1000, 1000)
        self.p1 = heuristic.Point(self.x1, self.y1)
        

        # Point 2
        self.x2 = random.uniform(-1000, 1000)
        self.y2 = random.uniform(-1000, 1000)
        self.p2 = heuristic.Point(self.x2, self.y2)

        # Track object
        self.t1 = heuristic.Track(self.p1, self.p2)


    def tearDown(self):
        pass


    def test_point_constructor(self):
        self.assertIsInstance(self.p1, heuristic.Point)
        self.assertIsInstance(self.p1.x, float)
        self.assertIsInstance(self.p1.y, float)
        self.assertEqual(self.p1.x, self.x1)
        self.assertEqual(self.p1.y, self.y1)


    def test_point_distance(self):
        self.assertIsInstance(self.p1.distance(self.p2), float)


    def test_heuristic_point(self):
        self.assertEqual(self.t1.s, self.p1.distance(self.p2))
    
        
if __name__ == '__main__':
    unittest.main()