/**
 *   @file: format.cc
 * @author: Nasseef Abukamail
 *   @date: February 08, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int x = 5;

    cout << setfill('*');
    cout << setw(4) << x << endl;
    cout << setw(7) << x << endl;
    cout << setw(7) << 123 << endl;
    cout << setw(7) << "abc" << setw(7) << "xyz" << endl;

    double salary = 123.45678;
    cout << fixed << setprecision(2);
    cout << setw(9) << salary << endl;
    
    return 0;
} /// main