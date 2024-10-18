/**
 *   @file: getline.cc
 * @author: Nasseef Abukamail
 *   @date: October 16, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    int age;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(100, '\n');
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << age << " " << name << endl;
    return 0;
} /// main