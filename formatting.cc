/*
 *   File Name: formatting.cc
 *      Author: Nasseef Abukamail
 *        Date: September 12, 2025
 * Description: Example program to demonstrate different formatting options in C++.
 *
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double largeNumber = 12345356789.12355678;
    cout << "Default display (6 digits, scientific)>" << largeNumber << "<" << endl;
     
    // Use only two digits in Scientific notation
    cout << setprecision(3);
    cout << "Scientific, precision of 3 >" << largeNumber << "<" << endl;
    
    // When using fixed, use two digits after the decimal point
    cout << fixed;
    cout << "Fixed, precision of 3 >" << largeNumber << "<" << endl << endl;

    // using setw right justification (default)
    int intNum = 1234;
    double smallNumber = 3.14159;
    cout << "setw(10) right justification(default) >" 
         << setw(10) << intNum
         << setw(10) << smallNumber << "<" << endl;
     
     
    ///left justification
    cout << left;
    cout << "          setw(10) left justification >"   
         << setw(10) << intNum << setw(10)
         << smallNumber << "<" << endl << endl;
      

    ///changing the fill character for setw
    cout << setfill('*');
    cout << "setw(10) left justification with '*' fill character >" 
         << setw(10) << intNum << setw(10)
         << smallNumber << "<" << endl << endl;
    
    
    cout << setprecision(2);
    cout << "Your salary is $" << largeNumber << endl;
    return 0;
}
