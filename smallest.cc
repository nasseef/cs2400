/**
 *   @file: smallest.cc
 * @author: Nasseef Abukamail
 *   @date: February 15, 2021
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    int number, smallest;
    cout << "Enter a number, negative to quit: ";
    cin >> number;
    smallest = number;
    while (number >= 0) {
        if (number < smallest) {
            smallest = number;
        }
        cout << "Enter a number, negative to quit: ";
        cin >> number;
    }

    cout << "Smallest is " << smallest << endl;
    return 0;
}  /// main