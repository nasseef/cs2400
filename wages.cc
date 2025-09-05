/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: September 05, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    //1. decalare variables
    double hours, rate, pay;

    cout << endl;
    //2. Input hours and rate
    cout << "Enter the rate: ";
    cin >> rate;
    cout << "Enter the hours: ";
    cin >> hours;

    //3. calculation
    pay = hours * rate;

    //4. output results
    cout << "Number of hours worked: " << hours << " hours" << endl;
    cout << "Your hourly rate: $" << rate << endl;
    cout << "Your weekly wages: $" << pay << endl;

    return 0;
} /// main