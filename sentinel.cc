/**
 *   @file: sentinel.cc
 * @author: Nasseef Abukamail
 *   @date: February 05, 2025
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
    cout << "Enter a number, negative to quit: ";
    cin >> number; //I
    while (number >= 0) { //C
        count++;
        total += number;
        cout << "Enter a number, negative to quit: ";
        cin >> number; //U
    }
    cout << "Total is " << total << endl;
    cout << "Count is " << count << endl;
    return 0;
}  /// main