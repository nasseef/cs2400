/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: September 06, 2023
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cctype>
using namespace std;

/// Constants and function prototypes
const double MAX_RATE = 30;
const double MIN_RATE = 10;

int main(int argc, char const *argv[]) {
    /// 1 declaration
    double rate, hours, wages;
    string answer = "n";

    // input
    // rate = 1012;
    // hours = 30;

        cout << "Enter the rate: ";
        cin >> rate;
        // validate the input
        if (rate < MIN_RATE || rate > MAX_RATE)  // invalid
        {
            cout << "Error: rate must be between " << MIN_RATE << " and "
                 << MAX_RATE << endl;
            exit(0);
        }

        cout << "Enter the hours: ";
        cin >> hours;
        if (hours < 0) {
            cout << "Error: hours must be 0 or more" << endl;
            exit(0);
        }

        /// 2 calculations
        wages = rate * hours;

        // 3. output
        cout << fixed << setprecision(2);
        cout << "Wages: $" << wages << endl;
        cout << "Process more (y/n)? ";
        cin >> answer;
    } while (tolower(answer.at(0)) == 'y');

    return 0;
}  /// main
