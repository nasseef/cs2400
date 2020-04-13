/**
 *   @file: rectangle-main.cc
 * @author: Nasseef Abukamail
 *   @date: April 13, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;

class Rectangle{
public:
    //constructors
    Rectangle(); //default constructor
    Rectangle(double newLength, double newWidth);


    //helper function
    void output(ostream &outs);
private:
    double length;
    double width;
};
///function prototypes

int main(int argc, char const *argv[]) {

    Rectangle r1;
    r1.output(cout);
    
    return 0;
}/// main

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