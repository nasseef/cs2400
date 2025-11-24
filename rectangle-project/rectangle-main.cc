/**
 *   @file: rectangle-main.cc
 * @author: Nasseef Abukamail
 *   @date: November 24, 2025
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;

class Rectangle {
public:
    Rectangle();
    Rectangle(double newLength, double newWidth);

    //getters
    double getLength() const;
    double getWidth() const;

    //setters
    void setLength(double newLength);
    void setWidth(double newWidth);

    //helper functions
    void output();
    double area();
    double perimeter();
    bool isSquare();
    
    friend bool operator ==(Rectangle r1, Rectangle r2);
    
            
private:
    double length;
    double width;
};



int main(int argc, char const *argv[]) { 
    Rectangle r1(20, 10);
    
    r1.output();
    cout << endl;
    Rectangle r2(20, 10);
    
    r2.output();
    cout << endl;

    if (r1 == r2)
    {
        cout << "Equal" << endl;
    }
    else {
        cout << "Not Equal" << endl;
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

double Rectangle::getLength() const{
    return length;
}
double Rectangle::getWidth() const{        
    return width;
}

void Rectangle::output(){
    cout << "(" << length << "x" << width << ")";
}

bool operator ==(Rectangle r1, Rectangle r2){
    if (r1.length == r2.length && 
        r1.width == r2.width)
    {
        return true;
    }
    return false;
}




