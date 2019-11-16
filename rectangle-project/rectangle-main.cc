/**
 *   @file: rectangle-main.cc
 * @author: Nasseef Abukamail
 *   @date: November 15, 2019
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class Rectangle{
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
private:
    double length;
    double width;
};
///function prototypes

int main(int argc, char const *argv[]) {

    Rectangle r;
    //expect length = width = 0
    r.output();
    r.setLength(9);
    r.setWidth(6);
    r.output();
    Rectangle r2(-20, -10);
    r2.output();
    return 0;
}/// main

Rectangle::Rectangle(){
    length = 0;
    width = 0;
}

Rectangle::Rectangle(double newLength, double newWidth){
    length = width = 0;
    if (newLength >= 0)
    {
        length = newLength;
    }
   
    if (newWidth >= 0)  
    {
        width = newWidth;
    }
    
    
}
double Rectangle::getLength(){
    return length;
}

double Rectangle::getWidth(){
    return width;
}

void Rectangle::output(){
    cout << "Length " << length << endl;
    cout << "Width " << width << endl;
}

void Rectangle::setLength(double newLength){
    if (newLength >= 0)
    {
        length = newLength;
    }
}
void Rectangle::setWidth(double newWidth){
    if (newWidth >= 0)
    {
       width = newWidth;
    }
}