#ifndef TRACK_H
#define TRACK_H

#include <iostream>
#include <math.h>

#include "point.h"

class Track
{
private:
    // Functions for calculating delta x and y.
    const double setdx();
    const double setdy();
    const double setS();
    
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

    // Print function for debugging
    void print();

};


#endif