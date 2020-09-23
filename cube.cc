/**
 *   @file: cube.cc
 * @author: Nasseef Abukamail
 *   @date: September 23, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes/declaration
int cube(int value);


int main(int argc, char const *argv[]) {
    int number = 3;
    int numberCubed = cube(number); //call, number is an argument/actual parameter
  
    cout << "The number cubed is " << numberCubed << endl;
    
    return 0;
} /// main

//function definition
int cube(int value){ //value is a formal parameter
    int result;  //local variable
    result = value * value * value;
    return result;
}
