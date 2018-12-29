//
// Created by Esteban Montesinos on 10/3/18.
//

#include "Triangle.h"
#include <math.h>

using namespace std;

Triangle::Triangle(double w, double h):Shape("triangle",w,h) {
    width=w;
    height=h;
}
double Triangle::perimeter() {
    hypotenuse=sqrt(pow(width,2)+pow(height,2));
    return width+height+hypotenuse;
}
double Triangle::area() {
    return 0.5*width*height;
}

