#include <iostream>
#include <fstream>
#include<iostream>
#include "Shape.h"
#include <vector>
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
using namespace std;
bool sortPerim(Shape *s1 ,Shape*s2);
bool sortArea(Shape *s3,Shape *s4);
vector<Shape*>shapes;
ifstream input;//used to get input from user
ofstream output;
string shape;
int x,y;

//functions

bool sortArea(Shape *s1,Shape *s2){
    return s1->area()<s2->area();
}
bool sortPerimeter(Shape *s1,Shape *s2){
    return s1->perimeter()<s2->area();
}



int main(int argc, char *argv[]) {
    //reading file
    input.open(argv[1],ifstream::in);//opens file
    if(!input.is_open())
    {//if statement incase it doesnt work
        cerr<<"ERROR:could not open file.txt\n";
        exit(1);
    }
    while(input){
        input>>shape;
        if(shape=="rectangle"){
            input>>x>>y;
            cout<<shape<<" "<<x<<" "<<y<<endl;
            shapes.push_back(new Rectangle(x,y));
        }

    }


}