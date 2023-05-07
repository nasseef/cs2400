
/**
 *   @file: rectangle.cc
 * @author: Nasseef Abukamail
 *   @date: June 15, 2020
 *  @brief: Rectangle class implementation. This class keeps track of a rectangle
 *          geometric figure. 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>


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
     * If any of the values are invalid the rectangle is inialized to 0x0.
     * @param newLenght - a valid length
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

    //The getter and the setter for the width are left as an exercise

    //helper function
    /**
     * area finds the area of the rectangle
     * @return - calculated area of the rectangle
     */
    double area();

    /**
     * output - display the rectangle on the screen
     */
    void output();

    //Can you implement isSqauare?
private:
    double length;
    double width;
};

int main(int argc, char const *argv[])
{
    Rectangle first; //use the default constructor
    first.output();
    cout << endl;
    Rectangle second(10, 6);
    second.output();
    cout << endl;

    second.setLength(-5); //invalid, leave it alone
    second.output();
    cout << endl;

    second.setLength(20);
    second.output();
    cout << endl;
    return 0;
}

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


double Rectangle::getLength(){
    return length;
}
//setters
void Rectangle::setLength(double newLength){
    if (newLength > 0)
    {
        length = newLength;
    }
}



void Rectangle::output(){
    cout << "(" << length << "x" << width << ")";
}