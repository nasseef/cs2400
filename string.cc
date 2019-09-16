/*
 *        File: string.cc
 *      Author: Nasseef Abukamail
 *        Date: September 16, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    string name = "John Smith";

    cout << "Initial: " << name.at(0) << endl;
    cout << "Some part: " << name.substr(5) << endl;
    cout << "Some part: " << name.substr(5, 3) << endl;
    cout << "Length is " << name.length() << endl;

    return 0;
}// main