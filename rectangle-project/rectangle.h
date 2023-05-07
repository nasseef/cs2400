#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <fstream>
using namespace std;

class Rectangle{
public:
    //Constructors
    /**
     * Default constructor, initialize the rectangle to 0 length and 0 width
     */
    Rectangle(); //default constructor

    /**
     * A constructor to initialize the length and width of the new object.
     * If any of the values are invalid the rectangle is initialized to 0x0.
     * @param newLength - a valid length
     * @param newWidth - a valid width 
     */
    Rectangle(double newLength, double newWidth);
    
    //getters
    /**
     * getLength: find the length of the rectangle
     * @return - length of the rectangle
     */
    double getLength();

    //setters
    /**
     * setLength - changes the length of the rectangle
     * @param newLength - a valid length of a rectangle
     */
    void setLength(double newLength);

    //Overloading the == operator
    friend bool operator ==(const Rectangle &r1, const Rectangle &r2);
    
    friend ostream & operator <<(ostream &outs, const Rectangle &r);

    void output(ostream &outs);
private:
    double length;
    double width;
};
#endif