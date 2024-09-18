/**
 *   @file: data-types.cc
 * @author: Nasseef Abukamail
 *   @date: September 06, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
const double PI = 3.14; //global declaration

int main(int argc, char const *argv[]) {

    //variable declaration and initialization
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is " << age << endl;
    double salary = 10000;
    //salary = salary + 2000;
    salary += 2000;
    cout << "Your salary is " << salary << endl;
    return 0;
} /// main