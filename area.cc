/**
 *   @file: area.cc
 * @author: Nasseef Abukamail
 *   @date: January 21, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    //variable declarations
    double side = 5.5;
    double area;

    //calculation
    area = side * side;

    //output the results
    cout << "The area of the square is " << area << endl;

    return 0;
} /// main