/**
 *   @file: rectangle-main.cc
 * @author: Nasseef Abukamail
 *   @date: April 13, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

class Rectangle
{
public:
    Rectangle(); //0x0
    Rectangle(double newLength, double newWidth);

    //getters/accessors
    double getLength() const;
    double getWidth() const;

    //setters/mutators
    void setLength(double newLength);
    void setWidth(double newWidth);

    //helper functions
    friend ostream & operator <<(ostream &out, const Rectangle &r);
    friend istream & operator >>(istream &inp, Rectangle &r);
    double area();
    double perimeter();
    bool isSquare();
    friend bool operator ==(const Rectangle &r1, const Rectangle &r2);
private:
    double length;
    double width;

};



///Constants and function prototypes

int main(int argc, char const *argv[]) {
    Rectangle r1(8, 5);
    cout << "Rectangle r1: ";
    cout << "Rectangle 1: " << r1 << endl;
    
    Rectangle r2(8, 5);
    cout << "Rectangle r2: ";
    cout << r2;
    cout << endl;
    if (r1 == r2)
    {
        cout << "Equal" << endl;
    }
    else {
        cout << "Not equal" << endl;
    }
    
    int x = 5;
    int y = x < 5 ? 10 : 0;
    cout << y << endl;
    

    return 0;
} /// main

Rectangle::Rectangle(){
    length = 0; // 0x0 is an invalid rectangle
    width = 0;  
}
Rectangle::Rectangle(double newLength, double  newWidth){

    // 0x5 invalid
    length = width = 0; //set defaults
    if (newLength != 0 && newWidth != 0)
    {
        length = newLength;
        width = newWidth;
    }
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
    if (r1.length == r2.length &&
        r1.width == r2.width)
    {
        return true;
    }
    return false;
}