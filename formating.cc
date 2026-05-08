/*
 *   File Name: formatting.cc
 *      Author: Nasseef Abukamail
 *        Date: May 12, 2020
 * Description: Example program to demonstrate different formatting options in
 * C++.
 *
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double largeNumber = 12345345678.12355678;
    cout << "Default display >" << largeNumber << "<" << endl;
   
    // Use only two digits in Scientific notation
    cout << setprecision(3);
    cout << "Scientific, precision of 3 >" << largeNumber << "<" << endl;
    
    // When using fixed, use two digits after the decimal point
    cout << fixed;
    cout << "Fixed, precision of 3 >" << largeNumber << "<" << endl;

    // using setw
    int intNum = 1234;
    double smallNumber = 3.14159;
    cout << "setw(10) right justification(default) >" << setw(10) << intNum
         << setw(10) << smallNumber << "<" << endl;

    cout << left;
    cout << "setw(10) left justification >" << setw(10) << intNum << setw(10)
         << smallNumber << "<" << endl;
    
    cout << setfill('*');
    cout << "setw(10) left justification >" << setw(10) << intNum << setw(10)
         << smallNumber << "<" << endl;
    cout << setprecision(2);
    cout << "Your salary is $" << largeNumber << endl;
    return 0;
}
