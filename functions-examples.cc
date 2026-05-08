/**
 *   @file: functions-examples.cc
 * @author: Nasseef Abukamail
 *   @date: May 25, 2020
 *  @brief: A program to demonstrate value-returning functions.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes
int cube(int value);
/**
 * cube: Calculates the cube of an integer
 * @param value - The integer to be cubed
 * @return - retuns the cube of the parameter value
 */

double average(double n1, double n2);
/**
 * average: Calculates the average of two double numbers
 * @param n1 - the first number
 * @param n2 - the second number
 * @return - retuns the average of n1 and n2
 */
int main(int argc, char const *argv[]) {
    int numberCubed, number = 10;
    numberCubed = cube(number);
    cout << "The cube of " << number << " is " 
         << numberCubed << endl;

    cout << "Average = " << average(5, 6) << endl;
    return 0;
}/// main

int cube(int value){
    int result;
    result = value * value * value;
    return result;
}

double average(double n1, double n2){
    double result;
    result = (n1 + n2) / 2.0;
    return result;
}
