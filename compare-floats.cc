/*
 *        File: compare-floats.cc
 *      Author: Nasseef Abukamail
 *        Date: September 20, 2019
 * Description: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

// function prototypes

int main(int argc, char const *argv[]) {
    float x = 1.0 / 3;
    double y = 1.0 / 3;
    cout << setprecision(30) << fixed;
    cout << x << endl;
    cout << y << endl;
    if (x == y) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }
    return 0;
    return 0;
}  // main