/**
 *   @file: summation-2.cc
 * @author: Nasseef Abukamail
 *   @date: February 18, 2021
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    double number, total = 0;
    int count = 0;
    cout << "Enter a number: ";
    cin >> number;
    
    while (number >= 0) {
        count++;
        total += number;
        cout << "Enter a number: ";
        cin >> number;
    }
    cout << "Count: " << count << endl;
    cout << "Total: " << total << endl;
    double average;
    if (count > 0) {
        average = total / count;
        cout << "Average: " << average << endl;
    }
    else {
        cout << "You did not enter any numbers" << endl;
    }

    return 0;
}  /// main