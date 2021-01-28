#ifndef POINT_H
#define POINT_H

typedef struct Point
{
    // Parameters
    double x, y;

    // Constructors
    Point();
    Point(double, double);

    // Distance function
    double distance(Point &p);

} Point;

#endif