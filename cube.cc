/**
 *   @file: cube.cc
 * @author: Nasseef Abukamail
 *   @date: February 19, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes or function declaration
int cube(int value);

int main(int argc, char const *argv[]) {

    int number = 5;
    int numberCubed;
    numberCubed = cube(number); //number is an actual parameter or an argument
    cout << "cube is " << numberCubed << endl;
   
    cout << cube(-3) << endl;
    return 0;
} /// main

//function definition
int cube(int value){// Function Heading: value is a formal parameter
    int result;  //local variable
    result = value * value * value;
    return result;  //returned value
}