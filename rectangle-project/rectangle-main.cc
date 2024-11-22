/**
 *   @file: rectangle-main.cc
 * @author: Nasseef Abukamail
 *   @date: November 22, 2024
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

class Rectangle {
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
    double area();
    double perimeter();
    bool isSquare();
    friend bool operator ==(const Rectangle &r1, const Rectangle &r2);
    friend ostream & operator <<(ostream &outs, const Rectangle &r);

private:
    double length;
    double width;
};

/// Constants and function prototypes


int main(int argc, char const *argv[]) { 
    Rectangle r1;
    cout << r1;
    cout << endl;
    Rectangle r2(9, 3);
    //r2.output();
    cout << "Rectangle 2: " << r2 << endl;
    cout << endl;

    if (r1 == r2)  
    {
        cout << "Equal" << endl;
    }
    else {
        cout << "Not equal" << endl;
    }
    
    return 0; 
}  /// main

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

ostream & operator <<(ostream &outs, const Rectangle &r)
{
    outs << "(" << r.length << ", " << r.width << ")";
    return outs;
}

double Rectangle::getLength(){
    return length;
}
double Rectangle::getWidth(){        
    return width;
}

bool operator ==(const Rectangle &r1, const Rectangle &r2){

    return r1.length == r2.length && r1.width == r2.width;

    // if (r1.length == r2.length && r1.width == r2.width)
    // {
    //     return true;
    // }
    // return false;
}