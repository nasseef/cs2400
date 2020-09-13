/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: September 11, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

const double HOURLY_RATE = 10.0;
const double REGULAR_HOURS = 40.0;

int main(int argc, char const *argv[]) {

    //1. variable declaration
    double hours, pay;

    //2. input/read number of hours
    cout << "Enter hours worked: ";
    cin >> hours;

    //3. calculate the pay
    if (hours > REGULAR_HOURS) //overtime pay
    {
        double overtime = (hours - REGULAR_HOURS) * 1.5 * HOURLY_RATE;
        pay = overtime + REGULAR_HOURS * HOURLY_RATE;
    }
    else {
        pay = hours * HOURLY_RATE;
    }

    //4. display/output/write/print the pay
    cout << "Pay is " << pay << endl;
    return 0;
} /// main