#ifndef TRACK_H
#define TRACK_H

#include <iostream>
#include <math.h>
#include <string.h>

#include "point.h"

class Track
{
private:
    // Empty
    
public:
    // Required start- and endpoint. 
    Point startpoint, endpoint;

    // Variables for storing delta x and y values.
    double dx, dy;

    // Variable for storing main track distance.
    double s;

    // Variable for storing main track angle.
    double t;

    // Forbid empty constructor
    Track() = delete;

    // Constructor taking two arguments of type Point
    Track(Point &startpoint, Point &endpoint);

    // Angle function
    const double angle(Point &p1, Point &p2);

    // Pitch function
    const double pitch(Point &p);

};


#endif