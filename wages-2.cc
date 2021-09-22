/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: September 10, 2021
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    // 1. declare the variables
    double rate, hours, pay;
    string answer;
    do {
        // 2. Input
        cout << "Enter the number of hours: ";
        cin >> hours;
        // validating the input
        if (hours < 0 || hours > 60)  // invalid
        {
            cout << "Error: hours must be between 0-60" << endl;
            // return 0;
            exit(0);  // terminate the program
        }

        cout << "Enter the rate: ";
        cin >> rate;

        if (rate <= 0 || rate > 30) {
            cout << "Error: rate must be > 0 and < 30" << endl;
            // return 0;
            exit(0);  // terminate the program
        }
        // 3. Calculations
        pay = hours * rate;

        // 4. OUtput
        cout << fixed << setprecision(2);
        cout << "Your pay is $" << pay << endl;
        cout << "More(y/n)? ";
        cin >> answer;

    } while (answer.at(0) == 'y' || answer.at(0) == 'Y');

    return 0;
}  /// main