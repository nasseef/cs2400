/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: September 06, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    ///1 declaration
    double rate, hours, wages;

    // input
    // rate = 1012;
    // hours = 30;

    cout << "Enter the rate: ";
    cin >> rate;
    if (rate <= 0) //invalid
    {
        cout << "Error: rate must be greater than 0" << endl;
        exit(0);
    }
    
    cout << "Enter the hours: ";
    cin >> hours;
    if (hours < 0)
    {
        cout << "Error: hours must be 0 or more" << endl;
        exit(0);
    }
    
    /// 2 calculations
    wages = rate * hours;

    //3. output
    cout << fixed << setprecision(2);
    cout << "Wages: $" << wages << endl;

    return 0;
} /// main