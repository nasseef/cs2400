#include <iostream>
#include <fstream>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle(){
    length = 0;
    width = 0;
}

Rectangle::Rectangle(double newLength, double newWidth){
    //validate the data
    length = newLength;
    width = newWidth;
}
double Rectangle::getLength(){
    return length;
}

double Rectangle::getWidth(){
    return width;
}

void Rectangle::setLength(double newLength){
    //check for errors
    length = newLength;
}
void Rectangle::setWidth(double newWidth){
    //check for errors
    width = newWidth;
}
void Rectangle::output(ostream &outs){
    outs << "(" << length << "x" << width << ")";
}

double Rectangle::area(){
    return length * width;
}

bool operator ==(const Rectangle &r1, const Rectangle &r2){
if (r1.length == r2.length && r1.width == r2.width)
    {
        return true;
    }
    return false;
    
}

    ostream & operator <<(ostream &out, const Rectangle &r){
        out << "(" << r.length << "x" << r.width << ")";
        return out;
    }

// bool equal(const Rectangle &r1, const Rectangle &r2){
//     if (r1.length == r2.length && r1.width == r2.width)
//     {
//         return true;
//     }
//     return false;
    
// }