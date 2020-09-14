/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: September 11, 2020
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

const double HOURLY_RATE = 10.0;
const double REGULAR_HOURS = 40.0;
const double HOURS_LIMIT = 70.0;  //maximum number of hours

int main(int argc, char const *argv[]) {
    // 1. variable declaration
    double hours, pay;
    char answer;
    do
    {
        // 2. input/read number of hours
        cout << "Enter hours worked: ";
        cin >> hours;

        // input validation
        // if (hours < 0 || hours > HOURS_LIMIT) {
        //     cout << "Error: invalid number of hours" << endl;
        // } else 
        if(hours >= 0 && hours <= HOURS_LIMIT)
        {
            // 3. calculate the pay
            if (hours > REGULAR_HOURS)  // overtime pay
            {
                double overtime = (hours - REGULAR_HOURS) * 1.5 * HOURLY_RATE;
                pay = overtime + REGULAR_HOURS * HOURLY_RATE;
            } else {
                pay = hours * HOURLY_RATE;
            }

            // 4. display/output/write/print the pay
            cout << fixed << setprecision(2);
            cout << "Pay is $" << pay << endl;
        }
        else {
            cout << "Error: invalid number of hours" << endl;
        }
        cout << "Do you want to continue (y/n)? ";
        cin >> answer;
    } while (answer == 'y');

    return 0;
}  /// main