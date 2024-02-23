/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: January 29, 2024
 *  @brief: Calulate the wages for an hourly employee. Given the number
 *          hours worked and the rate of pay.
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    double rate, hours, wages;
    cout << fixed << setprecision(2);
    char answer;
    /// 1. declare variable (memory locations for data)

    /// 2. Input data
    do {
        cout << "Enter number of hours: ";
        cin >> hours;
        if (hours < 0 || hours > 60)  /// testing for invalid hours
        {
            cout << "Error: Invalid number of hours" << endl;
            exit(0);
        }

        cout << "Enter the rate: ";
        cin >> rate;
        if (rate < 10 || rate > 50)  // assume rate range is $10-$50
        {
            cout << "Error: Invalid pay rate" << endl;
            exit(0);
        }

        /// 3. Calculate the wages
        wages = rate * hours;

        /// 4. output results (wages)
        cout << "Number of hours: " << hours << endl;
        cout << "The hourly rate: $" << rate << endl;
        cout << "     Your wages: $" << wages << endl;
        cout << "More calculations (y/n)? ";
        cin >> answer;
    }while (answer == 'y');
            ;
        return 0;
    }  /// main