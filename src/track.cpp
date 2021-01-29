#include <iostream>
#include <math.h>
#include <string.h>

#include "track.h"
#include "point.h"

#define PI 3.14159265


// Constructor taking two arguments of type Point
Track::Track(Point &startpoint, Point &endpoint)
{
    // Setting start- and endpoint.
    this->startpoint = startpoint; this->endpoint = endpoint;
    this->dx = endpoint.x - startpoint.x;
    this->dy = endpoint.y - startpoint.y;
    this->s = startpoint.distance(endpoint);
    this->t = atan(dx / dy) * 180 / PI;
}

// Pitch function
const double Track::pitch(Point &p)
{
    // Calculating delta x and y between startpoint and 
    // a given point p.
    double dx_p = p.x - startpoint.x;
    double dy_p = p.y - startpoint.y;

    // Calculating distance and angle between startpoint
    // and given point p.
    double s_p = startpoint.distance(p);
    double t_p = atan(dx_p / dy_p) * 180 / PI;

    return t_p;
}

// Angle function
const double Track::angle(Point &p1, Point &p2)
{
    // Calculating delta x and y values.
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;

    double t = atan(dx / dy) * 180 / PI;    

    // Calculating the geodatic angle between two points.
    // First quadrant
    if (dx > 0 and dy > 0) {
        return t;
    // Second quadrant
    } else if (dx > 0 && dy < 0) {
        return t + 180;
    // Third quadrant
    } else if (dx < 0 && dy < 0) {
        return t + 180;
    // Fourth quadrant
    } else if (dx < 0 && dy > 0) {
        return t + 360;
    } else {
        return 0;
    } 
        
}





