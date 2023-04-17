#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <fstream>
using namespace std;

class Rectangle{
public:
    Rectangle(); //default 
    Rectangle(double newLength, double newWidth);

    //getters
    double getLength();
    double getWidth();

    //setters
    void setLength(double newLength);
    void setWidth(double newWidth);

    void output(ostream &outs);
    double area();
    //friend bool equal(const Rectangle &r1, const Rectangle &r2);
    friend bool operator ==(const Rectangle &r1, const Rectangle &r2);
private:
    double length;
    double width;
};


#endif