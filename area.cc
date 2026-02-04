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
const double PI = 3.14;
const double TAX_RATE = 0.07;

int main(int argc, char const *argv[]) {
   
    //variable declarations
    double length;
    double width;
    double area;
    // string name;
    // cout << "Enter your name: ";
    // cin >> name;
    //input
    cout << "Enter the rectangle length: ";
    cin >> length;
    cout << "Enter the rectangle width: ";
    cin >> width;

    //calculation
    area = length * width;

    //output the results
    cout << "The length is " << length << endl;
    cout << "The width is " << width << endl;
    cout << "The area of the rectangle is " << area << endl;

    return 0;
} /// main