#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <fstream>

using namespace std;

class Rectangle{
public:
    Rectangle();
    Rectangle(double newLength, double newWidth);

    //getters
    double getLength();
    double getWidth();
    //setters
    void setLength(double newLength);
    void setWidth(double newWidth);

    //helper functions
    void output();
    void area();
    void perimeter();
    bool isSquare();

    friend bool operator ==(const Rectangle &r1, const Rectangle &r2);
    friend ostream & operator <<(ostream & outs, const Rectangle &r);
private:
    double length;
    double width;
};
#endif