/**
 *   @file: rectangle-main.cc
 * @author: Nasseef Abukamail
 *   @date: April 13, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <fstream>
#include "rectangle.h"

using namespace std;
///function prototypes

int main(int argc, char const *argv[]) {

    Rectangle r1;
    cout << r1;
    cout << endl;
    Rectangle r2(10, 5);
    r2.setLength(-5); 
    cout << r2;
    cout << endl;
    Rectangle r3(20, 30);
    Rectangle r4(20, 10);
    if (r3 == r4)       
    {
        cout << "The two rectangles are equal" << endl;
    }
    else {
        cout << "The two rectangles are NOT equal" << endl;
    }
    
    return 0;
}/// main

