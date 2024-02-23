/**
 *   @file: char-functions.cc
 * @author: Nasseef Abukamail
 *   @date: February 21, 2024
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cctype>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    char ch;
    do {
        cout << "enter a character: ";
        cin >> ch;
        cout << "isalpha: " << isalpha(ch) << endl;
        cout << "isalnum: " << isalnum(ch) << endl;
        cout << "isdigit: " << isdigit(ch) << endl;
        cout << "isupper: " << isupper(ch) << endl;
        cout << "islower: " << islower(ch) << endl;

    } while (ch != 'q');

    return 0;
}  /// main