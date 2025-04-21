/**
 *   @file: rectangle-main.cc
 * @author: Nasseef Abukamail
 *   @date: April 18, 2025
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
    friend ostream & operator <<(ostream &out, Rectangle r);
            
private:
    double length;
    double width;
};

/// Constants and function prototypes


int main(int argc, char const *argv[]) { 
    Rectangle r1(20, 10);
    
    cout << r1 << "Done" << endl;
    cout << endl;
    Rectangle r2(20, 10);
    
    cout << r2;
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

ostream & operator <<(ostream &out, Rectangle r){
    out << "(" << r.length << "x" << r.width << ")";
    return out;
}

bool operator ==(Rectangle r1, Rectangle r2){
    if (r1.length == r2.length && 
        r1.width == r2.width)
    {
        return true;
    }
    return false;
}




