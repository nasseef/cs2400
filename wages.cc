/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: January 30, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    //1. declare variable
    double rate, hours, wages;

    //2. input rate and hours
    cout << "Enter the hourly rate: ";
    cin >> rate;
    if (rate < 15 || rate > 35)
    {
        cout << "Error: rate invalid" << endl;
        exit(0);
    }
    
    cout << "Enter the number of hours: ";
    cin >> hours;
    if (hours >= 0 && hours <= 40)
    {
    
    
    //3. Calculating the wages
    wages = hours * rate;

    cout << fixed << setprecision(2);  //scientific
    double x = 12345678910000.345;
    cout << "x = " << x << endl;
    cout <<"The hourly rate is $" << rate << endl;

    cout << "The number of hours is " << hours << endl;
    cout << "The wages: $" << wages << endl;
    }
    else {
        cout << "Error: hours is invalid" << endl;
    }
    return 0;
} /// main