/**
 *   @file: math-functions.cc
 * @author: Nasseef Abukamail
 *   @date: February 01, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    
    double number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "square root: " << sqrt(number) << endl;
    cout << "number cubed: " << pow(number, 3) << endl;
    cout << "number rounded: " << round(number) << endl;
    
    return 0;
} /// main