/**
 *   @file: cin-getline.cc
 * @author: Nasseef Abukamail
 *   @date: March 08, 2023
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
    string address;
    cout << "Enter your address: ";
    getline(cin, address);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(100, '\n');
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    return 0;
} /// main