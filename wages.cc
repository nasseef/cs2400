/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: January 27, 2025
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    string name;
    double hours, rate, wages;

    // input
    cout << "Enter the employee name: ";  //
    cin >> name;
    cout << "Enter the number of hours: ";
    cin >> hours;
    if (hours < 0 || hours > 40) //invalid
    {
        cout << "Error: hours must be between 0 and 40" << endl;
        exit(0);
    }
    
    cout << "Enter the rate: ";
    cin >> rate;
    if (rate < 10 || rate > 50)
    {
        cout << "Error: rate must be between 10 and 50" << endl;
        exit(0);
    }
    
    // process
    wages = hours * rate;

    // output
    cout << "Employee name is " << name << endl;
    cout << "The number of hours is " << hours << endl;

    cout << fixed << setprecision(2);
    cout << "The rate is " << rate << endl;
    cout << "Wages: $" << wages << endl;

    return 0;
}  /// main