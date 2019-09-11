/*
 *        File: input.cc
 *      Author: Nasseef Abukamail
 *        Date: September 11, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    int number;
    char initial;
    string name;
    cout << "Enter name, initial, and a number" << endl;
    cin >> name >> initial >> number;

    cout << "Name: " << name << endl;
    cout << "Initial: " << initial << endl;
    cout << "Number: " << number << endl;
    return 0;
}// main