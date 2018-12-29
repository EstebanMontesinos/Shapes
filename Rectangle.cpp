//
// Created by Esteban Montesinos on 10/3/18.
//
#include "Rectangle.h"
#include <math.h>
Rectangle::Rectangle(double w, double h):Shape("rectangle",w,h) {
    width=w;
    height=h;
}
double Rectangle::perimeter() {
    return(2*width)+(2*height);
}
double Rectangle::area() {
    return width*height;
}

