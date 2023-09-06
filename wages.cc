/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: September 06, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    ///1 declaration
    double rate, hours, wages;

    // input
    rate = 1012;
    hours = 30;

    /// 2 calculations
    wages = rate * hours;

    //3. output
    cout << "Wages: " << wages << endl;

    return 0;
} /// main