/**
 *   @file: doubles.cc
 * @author: Nasseef Abukamail
 *   @date: February 06, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

///Constants and function prototypes
const double TOL = 0.00000001;
int main(int argc, char const *argv[]) {

    float num1 = 1.0 / 3.0;
    double num2 = 1.0 / 3.0;
    if (fabs(num1-num2) <= TOL)
    {
        cout << "Equal" << endl;
    }
    else {
        cout << "Not equal" << endl;
    }
    
    return 0;
} /// main