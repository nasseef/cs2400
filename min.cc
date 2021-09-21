/**
 *   @file: min.cc
 * @author: Nasseef Abukamail
 *   @date: September 20, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    double number;
    double min;
    cout << "Enter a number: ";
    cin >> number;
    min = number;
    while (number >= 0)
    {
        if (number < min)
        {
            min = number;
        }
        cout << "Enter a number: ";
        cin >> number;
    }
    if (min < 0)
    {
        cout << "You did not enter any numbers" << endl;
    }
    else{
        cout << "Smallest number is " << min << endl;
    }
    return 0;
} /// main