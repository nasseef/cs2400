#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <fstream>
using namespace std;

class Rectangle{
public:
    //constructors
    Rectangle(); //default constructor
    Rectangle(double newLength, double newWidth);
    //getters
    double getLength();
    //setters
    void setLength(double newLength);
    //helper function

    //Overloading the == operator
    friend bool operator ==(const Rectangle &r1, const Rectangle &r2);
    
    friend ostream & operator <<(ostream &outs, const Rectangle &r);

    void output(ostream &outs);
private:
    double length;
    double width;
};
#endif