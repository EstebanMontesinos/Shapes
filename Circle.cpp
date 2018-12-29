//
// Created by Esteban Montesinos on 10/3/18.
//

#include "Circle.h"
using namespace std;
#include <math.h>

Circle::Circle(double r):Shape("circle",r) {
    radius=r;
}
double Circle::area() {
    return 2*M_PI*(radius*radius);
}
double Circle::perimeter() {
    return 2*M_PI*radius;
}