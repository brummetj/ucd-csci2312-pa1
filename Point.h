// A 2-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double x;
    double y;
    double z;

public:
    // Constructors
    // default constructor
    Point();
    Point(double x, double y, double z); // three argument constructor
    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);
    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;
    
    //distancto
    double distanceTo(const Point &) const;
};

#endif // __POINT_H
