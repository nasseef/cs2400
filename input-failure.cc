/**
 *   @file: input-failure.cc
 * @author: Nasseef Abukamail
 *   @date: February 9, 2022
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    int number, total = 0;
    cout << "Enter a number, Q to quit: ";
    cin >> number;
    while (!cin.fail()) {   ///fail is a member function of the object cin
        total += number;
        cout << "Enter a number, Q to quit: ";
        cin >> number;
    }
    cout << "Total: " << total << endl;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(100, '\n');
    }

    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is " << name << endl;

    return 0;
}  /// main