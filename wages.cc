/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: August 31, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    //variable declaration
    double hours; 
    double rate;
    double wages;

    cout << "Enter the hours: ";
    cin >> hours;
    cout << "Hours: " << hours << endl;
    cout << "Enter the rate: ";
    cin >> rate;
    cout << "Rate: " << rate 
         << endl;
    //calculations
    wages = rate * hours;
    //output
    cout << "Wages: " << wages << endl;
    return 0;
} /// main