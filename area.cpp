//
//  area.cpp
//  intermediate PA1
//
//  Created by Joshua Brummet on 2/4/16.
//  Copyright © 2016 C++. All rights reserved.
//

#include "area.hpp"
#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

double computeArea(const Point &a, const Point &b, const Point &c)
{
    double A, B, C;
    double S;
    
    double Area;
//    
   A= a.distanceTo(b);
   B= b.distanceTo(c);
   C= c.distanceTo(a);
   
//    
   S = (A + B + C)/2;
//    
//    
   Area = sqrt((S*(S-A)*(S-B) *(S-C)));
//                
    return Area;
    
    
};



