/**
 *   @file: input-output.cc
 * @author: Nasseef Abukamail
 *   @date: September 03, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    string name;
    int age;
    char ch = '\\';
    cout << "Enter your name followed by your age: ";
    cin >> name >> age;  //store the keyboard entry into age

    cout << name << "\"s \\age is " << age << endl;
    return 0;
} /// main