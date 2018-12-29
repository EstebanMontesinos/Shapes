//
// Created by Esteban Montesinos on 10/3/18.
//

#ifndef HW_6_TRIANGLE_H
#define HW_6_TRIANGLE_H

#include "Shape.h"
#include <math.h>

class Triangle: public Shape {
public:
    double hypotenuse;
    Triangle(double w,double h);
    double perimeter();
    double area();
};


#endif //HW6_TRIANGLE_H