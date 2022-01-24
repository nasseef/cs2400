/**
 *   @file: input.cc
 * @author: Nasseef Abukamail
 *   @date: January 24, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int age;
    double salary;
    cout << "Enter your age folowed by your salary: ";
    cin >> age >> salary;
    cout << "Age is " << age << endl;
    cout << "Salary is " << salary << endl;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is " << name << endl;
    return 0;
} /// main