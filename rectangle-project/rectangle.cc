#include <iostream>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle(){
    length = 0;
    width = 0;
}

void Rectangle::output(){
    cout << "(" << length << "x" << width << ")";
}