/**
 *   @file: average.cc
 * @author: Nasseef Abukamail
 *   @date: September 30, 2024
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

    cout << average(9, 6) << endl;
    cout << average(9, 6, 5) << endl;
    average(10, 20);
    double avg = average(10, 20) * 12;
    cout << avg << endl;
    return 0;
} /// main

double average(double first, double second){
    double result = (first + second) / 2.0; //local variable
    return result;
}
double average(double first, double second, double third){
    return (first + second + third) / 3.0;
}
