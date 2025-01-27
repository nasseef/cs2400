/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: January 27, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    string name;
    double hours, rate, wages;

    //input 
    cout << "Enter the employee name: ";
    cin >> name;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the rate: ";
    cin >> rate;

    //process
    wages = hours * rate;

    //output
    cout << "Employee name is " << name << endl;
    cout << "The number of hours is " << hours << endl;
   
    cout << fixed << setprecision(2);
    cout << "The rate is " << rate << endl;
    cout << "Wages: $" << wages << endl;

    return 0;
} /// main