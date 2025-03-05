/**
 *   @file: get-getline.cc
 * @author: Nasseef Abukamail
 *   @date: March 05, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int number;
    string name;
    cout << "Enter a number: ";
    cin >> number;
    cin.ignore(100, '\n');
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Number is " << number << endl;
    cout << "Name is " << name << endl;
    return 0;
} /// main

