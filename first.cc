/**
 *   @file: first.cc
 * @author: Nasseef Abukamail
 *   @date: January 22, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

///Constants and function prototypes

int main() {
    string message = "Hello CS 2400"; //object
    cout << message << endl;
    cout << "The length of the string is " << message.length() << endl;

    ///unsigned int age = 21; //initialize to 21
    size_t age = 21; // size_t is the same as unsigned int
    age = age + 5;
    cout << "In five years you will be " << age << endl;

    char initial = 'A';
    cout << "your initial is " << initial << endl;

    double salary = 10000.56;
    cout << "Your salary is " << salary << endl;
    return 0; ///additional comments explanation
} /// main