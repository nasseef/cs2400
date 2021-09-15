/**
 *   @file: float-double-compare.cc
 * @author: Nasseef Abukamail
 *   @date: September 13, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

///Constants and function prototypes
const double TOL = 1.0e-6;

int main(int argc, char const *argv[]) {

    float x = 1 / 3.0;
    double y = 1 / 3.0;

    if (fabs(x - y) <= TOL)
    {
        cout << "Equal" << endl;
    }
    else {
        cout << "Not equal" << endl;
    }

    cout << fixed << setprecision(30);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
} /// main