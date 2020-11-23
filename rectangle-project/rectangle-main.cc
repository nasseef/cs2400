/**
 *   @file: rectangle-main.cc
 * @author: Nasseef Abukamail
 *   @date: November 20, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;

class Rectangle {
public:
    //Constructors
    Rectangle();
    Rectangle(double newLength, double newWidth);

    //setter/mutators
    void setLength(double newLength);
    void setWidth(double newWidth);

    //getter/accessors
    double getLength() const;
    double getWidth() const;

    //helper functions
    friend ostream & operator <<(ostream &out, const Rectangle &r);
    double area() const;
    bool isSquare() const;
    double perimeter() const;
    friend bool operator ==(const Rectangle &r1, const Rectangle &r2);
private:
    double width;
    double length;
};
///function prototypes

int main(int argc, char const *argv[]) {

    Rectangle r1;
    r1.setLength(9);
    
    cout << r1 << "Done";
    cout << endl;
    Rectangle r2(6, 5);
    
    cout << r2; 
    cout << endl;
    cout << "Length = " << r2.getLength() << endl;

    Rectangle r3(8, 5);
    Rectangle r4(8, 4);
    if (r3 == r4)
    {
        cout << "Equal" << endl;
    }
    else {
        cout << "Not Equal" << endl;
    }
    
    return 0;
} /// main

Rectangle::Rectangle(){
    length = 0; // 0x0 is an invalid rectangle
    width = 0;  
}
Rectangle::Rectangle(double newLength, double  newWidth){

    // 0x5 invalid
    if (newWidth > 0)
    {
        width = newWidth;
    }
    else {
        width = 0;
    }

    length = newLength > 0 ? newLength : 0;
    // or
    // if (newLength > 0)
    // {
    //     length = newLength;
    // }
    // else {
    //     length = 0;
    // } 
}

ostream & operator <<(ostream &out, const Rectangle &r){
    out << "(" << r.length << "x" << r.width << ")";
    return out;
}

void Rectangle::setLength(double newLength){
    if (newLength > 0)
    {
        length = newLength;
    }
    
}

double Rectangle::getLength() const{

    return length;
}
double Rectangle::getWidth() const { 
    return width; 
}

bool operator ==(const Rectangle &r1, const Rectangle &r2){
    if (r1.length == r2.length && r1.width == r2.width)
    {
        return true;
    }
    return false;
}
