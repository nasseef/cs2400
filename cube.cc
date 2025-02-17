/**
 *   @file: cube.cc
 * @author: Nasseef Abukamail
 *   @date: February 17, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes or function declaration
/**
 * Documentation for the function
 */

 //constants
 
int cube(int value); //function declaration/prototype

int main(int argc, char const *argv[]) {

    int number = 3;
    int numberCubed;
    numberCubed = cube(number);
    cout << "cube is " << numberCubed << endl;
    cout << "cube of 9 is " << cube(9) << endl;
    return 0;
} /// main

//function definition
int cube(int value){// function heading, value is a formal parameter
    int result;  //local variable
    result = value * value * value;
    return result;
}
