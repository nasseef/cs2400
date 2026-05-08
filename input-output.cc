/**
 *   @file: input-output.cc
 * @author: Nasseef Abukamail
 *   @date: May 10, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    int age;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "\t\tYour name is " << name << endl;
    cout << "Your age is " << age << endl;

    cout << "Enter your name followed by your age: ";
    cin >> name >> age;
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;
    return 0;
}/// main