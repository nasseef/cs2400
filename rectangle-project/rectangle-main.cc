/**
 *   @file: rectangle-main.cc
 * @author: Nasseef Abukamail
 *   @date: April 13, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class Rectangle
{
public:
    Rectangle(); //0x0
    Rectangle(double newLength, double newWidth);

    //getters/accessors
    double getLength();
    double getWidth();

    //setters/mutators
    void setLength(double newLength);
    void setWidth(double newWidth);

    //helper functions
    void output(ostream &out);
    double area();
    double perimeter();
    bool isSquare();
private:
    double length;
    double width;

};



Rectangle::~Rectangle()
{
}

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    /*add code*/
    return 0;
} /// main