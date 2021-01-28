#include <math.h>
#include "point.h"

// The point struct is the base for all further calculations.
// It's containig two variables x and y of type double representing
// the coordinates of a point. Coordinates should be in a metric form 
// as algorithms in this script are based on using the euclidean distance
// between two points.

// Parameters
int x, y;

// Constructors
Point::Point(): x(.0), y(.0){};
Point::Point(double x, double y): x(x), y(y){};

// Distance function
double Point::distance(Point &p)
{
    return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
}

