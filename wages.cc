/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: January 29, 2024
 *  @brief: Calulate the wages for an hourly employee. Given the number
 *          hours worked and the rate of pay.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    double rate, hours, wages;
    cout << fixed << setprecision(2);
    /// 1. declare variable (memory locations for data)

    /// 2. Input data
    cout << "Enter number of hours: ";
    cin >> hours;
    if (hours < 0 || hours > 60) /// testing for invalid hours
    {
        cout << "Error: Invalid number of hours" << endl;
        exit(0);
    }
    
    cout << "Enter the rate: ";
    cin >> rate;

    /// 3. Calculate the wages
    wages = rate * hours;

    /// 4. output results (wages)
    cout << "Number of hours: " << hours << endl;
    cout << "The hourly rate: $" << rate << endl;
    cout << "     Your wages: $" << wages << endl;

    return 0;
} /// main