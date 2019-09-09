/*
 *        File: input-output.cc
 *      Author: Nasseef Abukamail
 *        Date: September 06, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    cout << "Hello\" \\ \tWorld\n";
    int age = 40;
    cout << "My ages is " << age << '.' << endl;
    cout << (9 + 5) << endl;
    string name = "Bob";
    cout << "My name is " << name << endl;
    double salary = 2000000000.24567;
    cout << fixed << setprecision(2) << showpoint;
    cout << "Salary is $" << salary << endl;
    return 0;
}// main