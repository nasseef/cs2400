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

    cout << "Enter the number of hours: ";
    cin >> hours;

    //3. Calculating the wages
    wages = hours * rate;

    cout << "The hourly rate is " << rate << endl;
    cout << "The number of hours is " << hours << endl;
    cout << "The wages: " << wages << endl;
    return 0;
} /// main