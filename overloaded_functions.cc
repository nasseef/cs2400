/*
 *        File: overloaded_functions.cc
 *      Author: Nasseef Abukamail
 *        Date: February 18, 2019
 * Description: A program to demonstrate overloaded functions.
 */

/*
 * Extra credit due on Wednesday 10:45 AM. Be one of the first 10 students
 * to receive the extra credit.
 *
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

// function prototypes
/**
 * average - find the average of two numbers
 * @param n1 - first number
 * @param n2 - second number
 * @return - the average of n1 and n2
 */
double average(double n1, double n2);

/**
 * average - find the average of three numbers
 * @param n1 - first number
 * @param n2 - second number
 * @param n3 - third number
 * @return - the average of n1, n2, and n3
 */
double average(double n1, double n2, double n3);

int main(int argc, char const *argv[]) {
    double num1 = 5, num2 = 6.5, num3 = 7.5;
    double result = average(num1, num2, num3);
    cout << "Average of 3 numbers: " << result << endl;
    cout << "Average of 2 numbers: " << average(num1, num2) << endl;

    return 0;
}  // main

// Average of 2 values
double average(double n1, double n2) {
    return ((n1 + n2) / 2.0);
}
// Average of 3 values
double average(double n1, double n2, double n3) {
    double result = (n1 + n2 + n3) / 3.0;
    return result;
}