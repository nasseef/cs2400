/**
 *   @file: rectangle.cc
 * @author: Nasseef Abukamail
 *   @date: December 04, 2023
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

class Rectangle {
   public:
    // constructors
    Rectangle();
    Rectangle(double newLength, double newWidth);

    // getters
    double getLength();
    double getWidth();

    // setters
    void setLength(double newLength);
    void setWidth(double newWidth);

    void output();
    friend bool operator ==(const Rectangle &r1, const Rectangle &r2);
   private:
    double length;  // comments
    double width;
};
/// Constants and function prototypes


int main(int argc, char const *argv[]) { 
    Rectangle r;
    r.output();
    cout << endl;
    Rectangle r2;
    r2.output();
    cout << endl;

    if (r == r2)
    {
        cout << "equal";
    }
    else {
        cout << "not equal";
    }
    cout << endl;
    
    return 0; 
}  /// main

Rectangle::Rectangle() {
    width = 0;
    length = 0;
}
Rectangle::Rectangle(double newLength, double newWidth) {
    if (newWidth > 0 && newLength > 0) {
        length = newLength;
        width = newWidth;
    } else {
        length = 0;
        width = 0;
    }
}

// getters
double Rectangle::getLength() { return length; }
double Rectangle::getWidth() { return width; }

// setters
void Rectangle::setLength(double newLength){
    if (newLength > 0)
    {
        length = newLength;
    }
    
}
void Rectangle::setWidth(double newWidth){
    if (newWidth > 0)
    {
        width = newWidth;
    }
    
}

void Rectangle::output(){
    cout << "(" << length << "x" << width << ")";
}

bool operator ==(const Rectangle &r1, const Rectangle &r2){
    if (r1.length == r2.length &&
        r1.width == r2.width)
    {
        return true;
    }
    return false;
}
