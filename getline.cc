/**
 *   @file: getline.cc
 * @author: Nasseef Abukamail
 *   @date: October 02, 2020
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[]) {
    string name;
    cout << "Enter your name: ";
    getline(cin, name, '!');

    cout << "You entered " << name << endl;
    return 0;
}  /// main