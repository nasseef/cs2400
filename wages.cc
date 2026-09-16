/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: August 31, 2026
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const* argv[]) {
    // variable declaration
    double hours;
    double rate;
    double wages;
    char answer;
    cout << fixed;  // default is scientific
    cout << setprecision(2);
    do {
        // input
        cout << "Enter the hours: ";
        cin >> hours;
        if (hours < 0 || hours > 40) {
            cout << "Error: hours must be between 0 and 40 hours" << endl;
            exit(0);
        }

        cout << "Hours: " << hours << endl;
        cout << "Enter the rate: ";
        cin >> rate;
        if (rate < 10 || rate > 50) {
            cout << "Error: rate must be between 10 and 50" << endl;
            exit(0);
        }

        cout << "Rate: $" << rate << " per hour" << endl;
        // calculations
        wages = rate * hours;
        // output
        cout << "Wages: $" << wages << endl;
        cout << "Continue (y/n)? ";
        cin >> answer;  //initialized and updated
    } while (answer == 'y'); //condition
    return 0;
}  /// main