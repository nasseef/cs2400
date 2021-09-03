/**
 *   @file: fromatting.cc
 * @author: Nasseef Abukamail
 *   @date: September 03, 2021
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    double salary = 12345678.954;
    cout << fixed << setprecision(2);
    cout << "Your salary is $" << salary << endl;
    return 0;
}  /// main