/**
 *   @file: simple-calculation.cc
 * @author: Nasseef Abukamail
 *   @date: January 25, 2023
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

// main function/program
int main() {
    // variable declaration
    string name;
    int age; //initialized to garbage
    string prompt = "Enter your name: ";
    cout << prompt;
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;

    return 0;
}  /// main