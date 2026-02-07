/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: January 28, 2026
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const* argv[]) {
    char answer;
    double rate, hours, wages;
    do {
        // input the values
        cout << "Enter the number of hours: ";
        cin >> hours;
        if (hours < 0 || hours > 40)  // invalid
        {
            cout << "Hours must be between 0 and 40" << endl;
            exit(0);  // exit(EXIT_SUCCESS)
        }

        cout << "Enter the hourly rate: ";
        cin >> rate;
        if (rate < 10 || rate > 40) {
            cout << "Rate must be between 10 and 40" << endl;
            exit(0);
        }

        // Calculate the wages
        wages = rate * hours;

        // output the results
        cout << "Number of hours: " << hours << endl;
        cout << "Hourly rate: " << rate << endl;
        cout << fixed << setprecision(2);
        cout << "Wages: $" << wages << endl;
        
        cout << "Process more employees (y/n)? ";
        cin >> answer;
    } while (answer == 'y');
    return 0;
}  /// main