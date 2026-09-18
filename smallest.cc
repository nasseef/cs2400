/**
 *   @file: sentinel.cc
 * @author: Nasseef Abukamail
 *   @date: September 18, 2026
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const* argv[]) {
    int smallest;
    int num;
    cout << "Enter some numbers terminated by a negative number: " << endl;
    cin >> num;
    smallest = num;
    while (num >= 0) {
        if (num < smallest) {
            smallest = num;
        }
        cin >> num;
    }
    cout << "Smallest: " << smallest << endl;
    return 0;
}  /// main