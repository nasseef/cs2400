/**
 *   @file: rectangle-class.cc
 * @author: Nasseef Abukamail
 *   @date: November 10, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
class Rectangle{
public:
    Rectangle(); //default constructor
    Rectangle(double newLength, double newWidth); //exercise

    //getters
    double getLength();

    void output();
private:
    double length;
    double width;
};
int main(int argc, char const *argv[]) {

    Rectangle r;
    r.output();
    cout << endl;
    cout << "Length: " << r.getLength() << endl;
    return 0;
} /// main

Rectangle::Rectangle(){
    length = 0;
    width = 0;
}

Rectangle::Rectangle(double newLength, double newWidth){ //function stub
    //TODO
}
void Rectangle::output(){
    cout << "(" << length << "x" << width << ")";
}

double Rectangle::getLength(){
    return length;
}