/**
 *   @file: strings.cc
 * @author: Nasseef Abukamail
 *   @date: September 13, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    string name = "Sue";
    cout << "Enter your name: ";
    cin >> name;

    cout << "Length = " << name.length() << endl;
    cout << "Initial: " << name.at(0) << endl;
    int lastIndex = name.length() - 1;
    cout << "Last letter: " << name.at(lastIndex) << endl;
    cout << "Full name: " << (name + " Smith") << endl;
    return 0;
} /// main