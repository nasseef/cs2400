/**
 *   @file: ingnore.cc
 * @author: Nasseef Abukamail
 *   @date: October 15, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int number;
    string line;
    cout << "Enter a number: ";
    cin >> number;
    cin.ignore(1000, '\n');
    cout << "Enter a character: ";
    getline(cin, line);
    cout << number << endl;
    cout << line << endl;
    return 0;
} /// main