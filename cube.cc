/**
 *   @file: cube.cc
 * @author: Nasseef Abukamail
 *   @date: February 16, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes or function declaration

 
///Function prototypes/declaration
 
 /**
  * cube: fine the cube of an integer
  * @param: value - the number to be cubed
  * @return: the parameter value cubed
  */
int cube(int value); //function declaration/prototype

int main(int argc, char const *argv[]) {

    int number = 3;
    int numberCubed;
    numberCubed = cube( number); // 'number' is an argument/actual parameter
    cout << "cube is " << numberCubed << endl;
    cout << "cube of 9 is " << cube(9) << endl;
    return 0;
} /// main

//function definition
int cube(int value){// function heading, 'value' is a formal parameter
    int result;  //local variable
    result = value * value * value;
    return result;
}
