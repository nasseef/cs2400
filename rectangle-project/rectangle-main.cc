/**
 *   @file: rectangle-main.cc
 * @author: Nasseef Abukamail
 *   @date: April 15, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;

///Constants and function prototypes
class Rectangle{
public:
    //constructors
    Rectangle();
    Rectangle(double newLength, double newWidth);
    
    //setters 
    void setLength(double newLength);
    void setWidth(double newWidth);

    //getters
    double getLength();
    double getWidth();

    //helper functions
    double area();
    double perimeter();
    void output();
    friend bool operator ==(const Rectangle &r1, const Rectangle &r2);
    friend ostream & operator <<(ostream &out, const Rectangle &r);
private:
    double length;
    double width;
};


int main(int argc, char const *argv[]) {

    Rectangle r;
    cout << r << endl;

    Rectangle r2(9, 5);
    r2.setLength(-20);
    cout << "Rectangle 2: " << r2 << endl;

    cout << "R2 length: " << r2.getLength() << endl;
    cout << "R2 area: " << r2.area() << endl;
    
    Rectangle r3(9, 5);
    Rectangle r4(9, 5);
    if (r3 == r4)
    {
        cout << "Equal" << endl;
    }
    else {
        cout << "Not equal" << endl;
    }
    
    cout << r << r2 << r3 << r4 << endl;


    return 0;
} /// main

Rectangle::Rectangle(){
    length = 0;
    width = 0;
}
Rectangle::Rectangle(double newLength, double newWidth){
    if (newLength >= 0)
    {
        length = newLength;
    }
    else{
        length = 0;
    }

    if (newWidth >= 0)
    {
        width = newWidth;
    }
    else {
        width = 0;
    }
}

void Rectangle::setLength(double newLength){
    if (newLength >= 0)
    {
        length = newLength;
    }
}

double Rectangle::getLength(){
    return length;
}

double Rectangle::getWidth(){
    return width;
}

void Rectangle::output(){
    cout << "(" << length << "x" << width << ")";
}

double Rectangle::area(){
    return length * width;
}

bool operator ==(const Rectangle &r1, const Rectangle &r2){
    if (r1.length == r2.length && 
        r1.width == r2.width)
    {
       return true;
    }
    return false;
}
ostream & operator <<(ostream &out, const Rectangle &r){
    out << "(" << r.length << "x" << r.width << ")";
    return out;
}