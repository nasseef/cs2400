/**
 *   @file: cube.cc
 * @author: Nasseef Abukamail
 *   @date: September 30, 2024
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

int cube(int value); //function declaration/prototype
double average(double num1, double num2);

int main(int argc, char const *argv[]) {

    int number = 3;
    int numberCubed;
    numberCubed = cube(number);
    cout << "cube is " << numberCubed << endl;
    cout << "cube of 9 is " << cube(9) << endl;
    cout << "average of 5.4 and 3.6 is " << average(5.4, 3.6) << endl;
    return 0;
} /// main

//function definition
int cube(int value){// function heading, value is a formal parameter
    int result;  //local variable
    result = value * value * value;
    return result;
}

double average(double num1, double num2){
    double result = (num1 + num2) / 2;
    return result;
}