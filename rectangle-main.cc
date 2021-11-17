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
    double area() const;
    bool isSquare() const;
    double perimeter() const;
    friend bool operator ==(const Rectangle &r1, const Rectangle &r2);
    friend ostream& operator <<(ostream &out, const Rectangle &r);
    friend istream& operator >>(istream &ins, Rectangle &r);
    
private:
    double width;
    double length;
};
///function prototypes

int main(int argc, char const *argv[]) {

    Rectangle r1;
    r1.setLength(9);
    // ofstream fileOut;
    // fileOut.open("output.txt");
    // fileOut << r1;

    cout << r1 << endl;
    
    Rectangle r2(6, 5);
    
    cout << "Rectangle: " << r2 << endl;
    
    cout << "Length = " << r2.getLength() << endl;

    Rectangle r3(6, 8);
    Rectangle r4(8, 6);
    if (r3 == r4)
    {
        cout << "Equal" << endl;
    }
    else {
        cout << "Not equal" << endl;
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

ostream & operator <<(ostream &out, const Rectangle &r){
    out << "(" << r.length << "x" << r.width << ")";
    return out;
}
bool operator ==(const Rectangle &r1, const Rectangle &r2){
    if (r1.length == r2.length && r1.width == r2.width)
    {
        return true;
    }
    return false;
}
