/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: May 11, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    //1. Declare variables
    double hours, rate, pay;

    //2. Input the values
    cout << "Enter the hourly rate: ";
    cin >> rate;

    cout << "Enter the number of hours: ";
    cin >> hours;

    //3. Calculate the pay
    pay = hours * rate;

    //4. Display/output the pay
    cout << "Your weekly pay is " << pay << endl;
    return 0;
}/// main