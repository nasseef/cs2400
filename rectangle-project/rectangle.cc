#include <iostream>
#include <fstream>
#include "rectangle.h"
using namespace std;


Rectangle::Rectangle(){
    length = 0;
    width = 0;
}

Rectangle::Rectangle(double newLength, double newWidth){
    length = 0;
    width = 0;
    if (newLength > 0 && newWidth > 0)
    {
        length = newLength;
        width = newWidth;
    }
}


double Rectangle::getLength(){
    return length;
}
//setters
void Rectangle::setLength(double newLength){
    if (newLength > 0)
    {
        length = newLength;
    }
}

//Overloading the == operator
bool operator ==(const Rectangle &r1, const Rectangle &r2){
    if (r1.length == r2.length && r1.width  == r2.width)
    {
        return true;
    }
    return false;
}

ostream & operator <<(ostream &outs, const Rectangle &r){
    outs << "(" << r.length << "x" << r.width << ")";
    return outs;
}