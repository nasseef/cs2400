/**
 *   @file: getline.cc
 * @author: Nasseef Abukamail
 *   @date: October 09, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    string name;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(100, '\n');
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;
    return 0;
} /// main