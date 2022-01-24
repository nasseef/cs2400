/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: January 24, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    //0. variable decalarations
    double hours, rate, wages;
    //1. input the hours
    cout << "Enter the number of hours: ";
    cin >> hours;
    //2. input the rate
    cout << "Enter the hourly rate: ";
    cin >> rate;

    //3. Calculations
    wages = hours * rate;

    //4. Output
    cout << fixed << setprecision(2);
    cout << "Wages: $" << wages << endl;

    return 0;
} /// main