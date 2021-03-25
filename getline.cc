/**
 *   @file: getline.cc
 * @author: Nasseef Abukamail
 *   @date: March 08, 2021
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

    cout << "Enter your age: ";
    cin >> age;
    //ignore up to 100 characters or until you see the new line character
    cin.ignore(100, '\n');
    
    cout << "Enter your name: ";
    getline(cin, name);
    if (name == "")
    {
        cout << "You did not enter a name" << endl;
    }
    
    cout << "Your name is " << name << endl;    
    cout << "Your age is " << age << endl;

    return 0;
} /// main