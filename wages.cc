/*
 *        File: wages.cc
 *      Author: Nasseef Abukamail
 *        Date: September 11, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    ///#1 Variable declaration
    double rate, hours, wages;

    ///#2 input hours and rate
    cout << "Enter the hourly rate: ";
    cin >> rate;
    cout << "Enter the number of hours: ";
    cin >> hours;

    ///#3
    wages = hours * rate;

    ///#
    cout << fixed << setprecision(2) << showpoint;
    cout << "Weekly pay: $" << wages << endl;
    return 0;
}// main