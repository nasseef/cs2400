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
    r1.output(cout);
    cout << endl;
    Rectangle r2(10, 5);
    r2.setLength(-5); 
    r2.output(cout);
    cout << endl;
    return 0;
}/// main

