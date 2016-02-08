//
//  point.cpp
//  intermediate PA1
//
//  Created by Joshua Brummet on 2/4/16.
//  Copyright © 2016 C++. All rights reserved.
//

#include "Point.h"
#include <cmath>

Point::Point()
{
    x = 0;
    y = 0;
    z = 0;
}
Point::Point(double newx, double newy, double newz)
{
    x = newx;
    y = newy;
    z = newz;
}

void Point::setX(double newX)
{
    x = newX; //setting variable to object for access
}

void Point::setY(double newY)
{
    y = newY;
}

void Point::setZ(double newZ)
{
    z = newZ;

}

double Point::getX() const
{
    return x; // returning the value of x to user
}

double Point::getY() const
{
    return y;
}

double Point::getZ() const
{
    
    return z;
}

double Point::distanceTo(const Point &other) const
{
    
    double dx = other.getX() - x;
    double dy = other.getY() - y;
    double dz = other.getZ() - z;
    double total;
    
    total = sqrt((dx*dx)+(dy*dy)+(dz*dz));
    
    
    return total;
    
}



