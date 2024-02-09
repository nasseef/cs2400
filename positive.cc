/**
 *   @file: positive.cc
 * @author: Nasseef Abukamail
 *   @date: February 07, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int number;
    do{
        cout << "Enter a number: ";
        cin >> number;
    }while(number < 0);
    cout << "The number is " << number << endl;
    return 0;
} /// main