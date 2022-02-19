/**
 *   @file: pos-integer.cc
 * @author: Nasseef Abukamail
 *   @date: February 18, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
int getPositiveInteger();

int main(int argc, char const *argv[]) {

    int num;
    num = getPositiveInteger();
    cout << "You entered " << num << endl;
    return 0;
} /// main

int getPositiveInteger()
{
		int intValue;
		do {
			cout << "Enter a positive integer: ";
			cin >> intValue;
		} while(intValue < 0);
		return intValue;
}
