/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: February 02, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    //1. variable declaration
    double rate, hours, wages;
    
    //2. input values
    cout << "Enter hourly rate: ";
    cin >> rate;
    cout << "Enter the number of hours worked: ";
    cin >> hours;

    //3. Calculation
    wages = rate * hours;

    //4. output
    cout << fixed << setprecision(2);
    cout << "Your wages: $" << wages << endl;

    return 0;
} /// main