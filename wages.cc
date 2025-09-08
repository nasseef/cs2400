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
    if (rate < 10 || rate > 50)
    {
        cout << "Error: rate is invalid (10-50)" << endl;
        exit(0);
    }
    
    cout << "Enter the hours: ";
    cin >> hours;

    if (hours < 0 || hours > 40)
    {
        cout << "Error: hours are invalid (0-40)" << endl;
        exit(0);
    }
    
    //3. calculation
    pay = hours * rate;

    //4. output results
    cout << fixed;
    cout << setprecision(2);
    cout << "Number of hours worked: " << hours << " hours" << endl;
    cout << "Your hourly rate: $" << rate << endl;
    cout << "Your weekly wages: $" << pay << endl;

    return 0;
} /// main