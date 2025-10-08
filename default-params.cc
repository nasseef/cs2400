/**
 *   @file: default-params.cc
 * @author: Nasseef Abukamail
 *   @date: October 08, 2025
 *  @brief: Example of default function parameters
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes
/**
 * precOutput: precOutput a value with specified prec
 * @param: value - the value to be displayed
 * @param: prec - precision of the display (0 by default)
 */
void precOutput(double value, int prec = 0);

int main(int argc, char const *argv[]) {
    double value = 1234.934567;
    precOutput(value, 3);  // use 3 decimal places 1234.235
    precOutput(value, 5);  // use 5 decimal places 1234.23457
    precOutput(value);     // use 0 (default) decimal place 1235
    return 0;
}  /// main

void precOutput(double value, int prec) {
    cout << setprecision(prec) << fixed;
    cout << value << endl;
}
