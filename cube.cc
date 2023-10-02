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

    int x = 3;
    int y;
    y = cube(x);
    cout << "cube is " << y << endl;
    return 0;
} /// main

int cube(int value){// value is a formal parameter
    int result;  //local variable
    result = value * value * value;
    return result;
}