/**
 *   @file: cube.cc
 * @author: Nasseef Abukamail
 *   @date: October 02, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes or function declaration
int cube(int value);

int main(int argc, char const *argv[]) {

    int value = 3;
    int y;
    y = cube(value);
    cout << "cube is " << y << endl;
    cout << "value is " << value << endl; //stays at 3
    return 0;
} /// main

int cube(int value){// value is a formal parameter
    int result;  //local variable
    result = value * value * value;
    value += 5;  //only changes inside the function cube
    return result;
}