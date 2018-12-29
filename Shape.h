//
// Created by Esteban Montesinos on 10/3/18.
//

#ifndef HW_6_SHAPE_H
#define HW_6_SHAPE_H

#include <iostream>
using namespace std;
class Shape {
public:
    string s;
    double width;
    double height;
    double radius;
    virtual double area()=0;
    virtual double perimeter()=0;
    void setWidth(double w);
    double getWidth();
    void setHeight(double h);
    double getHeight();
    void setSize(double s);
    double getSize();
    void setRadius(double r);
    double getRadius();
    Shape(string s1,double size);
    Shape(string s2,double w,double h);



};


#endif //HW_6_SHAPE_H
