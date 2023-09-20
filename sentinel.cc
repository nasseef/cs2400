/**
 *   @file: sentinel.cc
 * @author: Nasseef Abukamail
 *   @date: September 20, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int num;
    int total = 0;
    int count = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num >= 0)
    {
        count++;
        total += num;
        cout << "Enter a number: ";
        cin >> num;
    }
    cout << "Total is " << total << endl;
    cout << "Count is " << count << endl;

    return 0;
} /// main