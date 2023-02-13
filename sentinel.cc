/**
 *   @file: sentinel.cc
 * @author: Nasseef Abukamail
 *   @date: February 10, 2023
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    double total = 0;
    double num = 0;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;       // I
    while (num >= 0)  // C
    {
        count++;
        total += num;  // total = total + num
        cout << "Enter a number: ";
        cin >> num;  // U
    }
    cout << "The total is " << total << endl;
    cout << "The count is " << count << endl;

    double average;
    if (count == 0) {
        cout << "count is zero, no average" << endl;
    } else {
        average = total / count;
        cout << "The average is " << average << endl;
    }

    return 0;
}  /// main