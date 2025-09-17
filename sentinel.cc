/**
 *   @file: sentinel.cc
 * @author: Nasseef Abukamail
 *   @date: September 17, 2025
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    int total = 0;
    int num;
    int count = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num >= 0) {
        count++;
        total += num;
        cout << "Enter a number: ";
        cin >> num;
    }
    cout << "Total is " << total << endl;
    if (count != 0)
    {
        cout << "Average is " << (total/count) << endl;
    }
    

    return 0;
}  /// main