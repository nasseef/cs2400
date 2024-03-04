/**
 *   @file: xyz.cc
 * @author: Nasseef Abukamail
 *   @date: March 04, 2024
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

    cout << "enter your age: ";
    cin >> age;
    cin.ignore(100, '\n');
    //getline(cin, name);
    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Age: " << age << endl;
    cout << "Name: " << name << endl;

    return 0;
} /// main