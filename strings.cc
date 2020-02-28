/**
 *   @file: strings.cc
 * @author: Nasseef Abukamail
 *   @date: February 26, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    string name = "John";
    cout << "Length = " << name.length() << endl;
    cout << "second character: " << name.at(1) << endl;
    for (int i = 0; i < name.length(); i++)
    {
        cout << "character: " << name[i] << endl;

    }
    name[0] = 'j';
    cout << "Name: " << name << endl;

    char ch;
    cout << "Enter a character: ";
    cin.get(ch);

    cout << "Character entered is " << ch << endl;
    cout << "done" << endl;
    return 0;
}/// main
