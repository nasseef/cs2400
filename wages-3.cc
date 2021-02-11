/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: February 02, 2021
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    // 0 variable declaration
    double rate, hours, wages;
    string name;
    char answer;

    do {
        // 1 input
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter the rate: ";
        cin >> rate;

        // input validation
        if (rate <= 0 || rate > 40) {
            cout << "Error: rate should be more than zero and <= $40" << endl;
            exit(0);  // return 0;
        }

        cout << "Enter the hours workded: ";
        cin >> hours;
        if (hours < 0 || hours > 80)  // input validation for hours
        {
            cout << "Error: hours must be positive and <= 80" << endl;
            exit(0);
        }

        // All input have been validated
        // 2 Calculations
        if (hours > 40) {  // calculate overtime pay
            double overtime;
            overtime = (hours - 40) * 1.5 * rate;
            wages = overtime + 40 * rate;
        } else {
            wages = hours * rate;
        }
        // 3 output the results
        cout << fixed << setprecision(2);  // output formatting
        cout << name << "'s wages: $" << wages << endl;
        cout << "Process more employees (y/n)? ";
        cin >> answer;
    } while (answer == 'y');
    cout << "DONE!" << endl;
    return 0;
}  /// main