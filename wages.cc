/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: January 27, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
    ///1
    double hours;
    double rate;
    double wages;
    
    ///read/input the number of hours
    cout << "Enter number of hours: ";
    cin >> hours;

    /// read the rate
    cout << "Enter the rate: ";
    cin >> rate;

    ///cin >> hours >> rate;
    ///2
    wages = hours * rate;

    ///3
    cout << "Hours: " << hours << endl;
    cout << "Hourly rate: $" << rate << endl;
    cout << "Wages: $" << wages << endl;
    return 0;
}/// main