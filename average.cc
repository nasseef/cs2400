/**
 *   @file: add.cc
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
 * 
 */
double getAverage(double x, double y); //prototypes or declaration
double getAverage(double x, double y, double z);

int main(int argc, char const *argv[]) {

    double num1 = 10.0, num2 = 15.0;
    double average;
    average = getAverage(num1, num2);  //call: find the average of num1 and num2
                                       //num1 & num2 are arguments/actual parameters

    cout << "Average: " << average << endl;

    average = getAverage(num1, num2, 20);  //call: find the average of num1 and num2

    cout << "Average: " << average << endl;
    return 0;
} /// main

//function definition
double getAverage(double x, double y){  //function heading, x & y are formal parameters
    double result;
    result = (x + y) / 2.0;
    return result;
}

double getAverage(double x, double y, double z){
    double result;
    result = (x + y + z) / 3.0;
    return result;
}