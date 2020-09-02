/**
 *   @file: input-output.cc
 * @author: Nasseef Abukamail
 *   @date: September 02, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    //declaration 
    int age;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your age is " << age << endl;
    cout << "Your name is " << name << endl;
    return 0;
} /// main