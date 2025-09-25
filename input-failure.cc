/**
 *   @file: sentinel.cc
 * @author: Nasseef Abukamail
 *   @date: September 19, 2025
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    double total;
    int count = 0;
    total = 0;
    double number;
    cout << "Enter a number, q to quit: ";
    cin >> number; //I
    while (!cin.fail()) { //C
        count++;
        total += number;
        //cout << "Enter a number, q to quit: ";
        cin >> number; //U
    }

    if (cin.fail())
    {
        cin.clear(); //clear the flag
        cin.ignore(100, '\n');
    }
    
    cout << "Total is " << total << endl;
    cout << "Count is " << count << endl;
    return 0;
}  /// main