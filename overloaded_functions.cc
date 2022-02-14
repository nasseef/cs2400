/*
 *        File: overloaded_functions.cc
 *      Author: Nasseef Abukamail
 *        Date: February 14, 2022
 * Description: A program to demonstrate overloaded functions.
 */



#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

// function prototypes
/**
 * average - find the average of two numbers
 * @param first - first number
 * @param second - second number
 * @return - the average of first and second
 */
double average(double first, double second);

/**
 * average - find the average of three numbers
 * @param first - first number
 * @param second - second number
 * @param third - third number
 * @return - the average of first, second, and third
 */
double average(double first, double second, double third);

int main(int argc, char const *argv[]) {
    double num1 = 5, num2 = 6.5, num3 = 7.5;
    double result = average(num1, num2, num3);
    cout << "Average of 3 numbers: " << result << endl;
    cout << "Average of 2 numbers: " << average(num1, num2) << endl;

    return 0;
}  // main

// Average of 2 values
double average(double first, double second) {
    return (first + second) / 2.0;
}
// Average of 3 values
double average(double first, double second, double third) {
    double result = (first + second + third) / 3.0;
    return result;
}