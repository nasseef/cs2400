/**
 *   @file: cube.cc
 * @author: Nasseef Abukamail
 *   @date: February 22, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
/**
 * cube - return the cube of a number
 * @param - number is an integer that already has a value
 * @return - returns the cube of a number
 */
int cube(int number); //function prototype or function declaration

int main(int argc, char const *argv[]) {

    int number = 5;
    int numberCubed;
    numberCubed = cube(number); //function call (number is an argument/actual parameter)
    cout << number << " Cubed is " << numberCubed << endl;
    int side = 3;
    numberCubed = cube(side); //function call (number is an argument/actual parameter)
    cout << number << " Cubed is " << numberCubed << endl;

    numberCubed = cube(10); //function call (number is an argument/actual parameter)
    cout << number << " Cubed is " << numberCubed << endl;
    return 0;
} /// main

int cube(int number) // Function heading, number is a formal parameter
{
    int result;
    result = number * number * number;
    return result;
}