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

void Rectangle::output(ostream &outs){
    outs << "(" << length << "x" << width << ")";
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