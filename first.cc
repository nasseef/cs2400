/**
 *   @file: first.cc
 * @author: Nasseef Abukamail
 *   @date: January 14, 2022
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14159;

/// Constants and function prototypes

int main() {
    // int studentSalary; 
    // int student_salary;

    //variable declaration
    int first = 5; //initialization 
    int second;
    double salary = 999.98;
    //double bigSalary = 1.2e9; //1.2 x 10^10
    cout << (first + salary) << endl;

    cout << (salary + IP);
    char initial = 'A';
    initial = initial + 1;
    cout << "Initial: " << initial << endl;

    bool done = true; 
    cout << "Done: " << done << endl;

    string name = "John\\Smith";  //object
    name = "Name: " + name;

    cout << name.length() << endl;
    cout << name.substr(1) << endl; //substring from position 1, 3 chars
    return 0;
}  /// main
