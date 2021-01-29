#include <iostream>
#include <math.h>

#include "track.h"
#include "point.h"

#define PI 3.14159265


// Functions for calculating delta x and y.
const double Track::setdx()
{
    return endpoint.x - startpoint.x;
}

const double Track::setdy()
{
    return endpoint.y - startpoint.y;
}

const double Track::setS()
{
    return startpoint.distance(endpoint);
}


// Constructor taking two arguments of type Point
Track::Track(Point &startpoint, Point &endpoint)
{
    // Setting start- and endpoint=
    this->startpoint = startpoint; this->endpoint = endpoint;
    this->dx = setdx();
    this->dy = setdy();
    this->s = setS();
    this->t = atan(dx / dy) * 180 / PI;
}

// Print function for debugging
void Track::print()
{
    std::cout << "Track(dx: " << dx << ", dy: " << dy << ", distance: " << s << ", angle: " << t << ")"<< std::endl;
}

