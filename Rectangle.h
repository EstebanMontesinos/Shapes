//
// Created by Esteban Montesinos on 10/3/18.
//

#ifndef HW_6_RECTANGLE_H
#define HW_6_RECTANGLE_H


#include "Shape.h"

class Rectangle:public Shape {
public:
    Rectangle(double w,double h);
    double perimeter();
    double area();
};



#endif //HW_6_RECTANGLE_H
