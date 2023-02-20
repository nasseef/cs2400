/**
 *   @file: cube.cc
 * @author: Nasseef Abukamail
 *   @date: February 20, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes or declaration
/**
 * cube - finds and returns the cube of an integer
 * @param value - the value to be cubed
 * @return - returns value ^ 3
 */
int cube(int value); 

int main(int argc, char const *argv[]) {

    int number;
    cout << "Enter a number to be cubed: ";
    cin >> number;
    int numberCubed = cube(number);//function call
    cout << number << " cubed is " << numberCubed << endl;
    return 0;
}/// main

//cube definition
int cube(int value){
    int result;
    result = value * value * value;
    return result;
}