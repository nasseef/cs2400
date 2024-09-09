/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: September 06, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    double hours, rate, wages;
    //input
    cout << "Enter the hours: ";
    cin >> hours;
    //validate the hours
    // if (hours < 0)
    // {
    //     cout << "Number of hours must be greater than or equal to 0" << endl;
    //     exit(0);
    // }
    // if (hours > 39)
    // {
    //      cout << "Number of hours must be less than or equal to 39" << endl;
    //     exit(0);
    // }
    
    if (hours < 0 || hours > 39)
    {
       cout << "Hours must between 0 and 39" << endl;
       exit(0);
    }
    
    cout << "Hours: " << hours << endl;
    cout << fixed << setprecision(2);

    cout << "Enter the rate: ";
    cin >> rate;
    //validate the rate
    cout << "Rate: $" << rate << endl;
    ///3. Calculations
    wages = hours * rate;
    cout << "Wages: $" << wages << endl;

    return 0;
} /// main