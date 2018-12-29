//
// Created by Esteban Montesinos on 10/3/18.
//

#ifndef HW_6_CIRCLE_H
#define HW_6_CIRCLE_H
#include<math.h>
#include "Shape.h"


class Circle: public Shape {
public:
    Circle(double r);
    double perimeter();
    double area();
};



#endif //HW_6_CIRCLE_H
