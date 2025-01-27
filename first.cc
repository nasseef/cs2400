/**
 *   @file: first.cc
 * @author: Nasseef Abukamail
 *   @date: January 17, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
const int UPPER_LIMIT = 1000;

int main() {
    //variable declaration
    int age;
    age = 23; //assignment statement


    age = age + 1;
    age += 1;
    age -= 1;
    age--;
    age++;
    ++age;
    age *= 2;


    cout << "Age is " << age << endl;
    cout << "Hello World!" << endl  << endl << endl;
    cout << 23 << 'A' << "AB" << endl;

    double salary;
    salary = 1000.67;
    cout << "Salary is " << salary << endl;
    string name = "John";
    cout << "First initial is " << name.at(0) << endl;
    cout << "Name length " << name.length() << endl;
    name = name +  " Smith";
    cout << "First initial is " << name.at(0) << endl;
    cout << "Name length " << name.length() << endl;

    cout << (7 / 2.0) << endl;
    return 0;
} /// main