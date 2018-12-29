//
// Created by Esteban Montesinos on 10/3/18.
//
#include "Shape.h"
#include <math.h>

using namespace std;

Shape::Shape(string s1,double r1){
    s=s1;
    radius=r1;
}
Shape::Shape(string s2,double w,double h){
    width=w;
    height=h;
    s=s2;
}
void Shape::setWidth(double w) {
    width=w;
}

double Shape::getWidth() {
    return width;
}
void Shape::setHeight(double h) {
    height=h;
}
double Shape::getHeight() {
    return height;
}
void Shape::setRadius(double r) {
    radius=r;
}
double Shape::getRadius() {
    return radius;
}