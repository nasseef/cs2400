/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: January 27, 2020
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;
/// constants are declared globally

/// function prototypes

int main(int argc, char const *argv[]) {
    /// 1
    double hours;
    double rate;
    double wages;
    char answer = 'y';
    while (answer == 'y') {
        /// read/input the number of hours
        cout << "Enter number of hours: ";
        cin >> hours;
        if (hours < 0) {
            cout << "Error: hours must be >= 0" << endl;
            continue;
        }

        /// read the rate
        cout << "Enter the rate: ";
        cin >> rate;
        if (rate < 0) {
            cout << "Error: rate must be > 0" << endl;
            continue;
        }

        /// cin >> hours >> rate;
        /// 2
        wages = hours * rate;

        /// 3
        cout << fixed << setprecision(2) << showpoint;  // formatting flags
        cout << "Hours: " << hours << endl;
        cout << "Hourly rate: $" << rate << endl;
        cout << "Wages: $" << wages << endl;
        cout << endl << "More employees(y/n)? ";
        cin >> answer;
    }
    return 0;
}  /// main