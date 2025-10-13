/**
 *   @file: average.cc
 * @author: Nasseef Abukamail
 *   @date: September 29, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
/**
 * function documentation
 */
double average(double first, double second);
/**
 * 
 */
double average(double first, double second, double third);

int main(int argc, char const *argv[]) {

    cout << "Average is " << average(9, 6) << endl;

    cout << "Average is " << average(9, 6, 5) << endl;
    
    double avg = average(10, 20);
    cout << "Average is " << avg << endl;
    return 0;
} /// main

double average(double first, double second){
    double result = (first + second) / 2.0; //local variable
    return result;
}
double average(double first, double second, double third){
    return (first + second + third) / 3.0;
}
