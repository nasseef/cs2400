/**
 *   @file: sentinel.cc
 * @author: Nasseef Abukamail
 *   @date: February 10, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    double total = 0;
    double num = 0;

    cout << "Enter a number: ";
    cin >> num; //I
    while (num >= 0) //C
    {
        total += num; // total = total + num
        cout << "Enter a number: ";
        cin >> num; //U
    }
    cout << "The total is " << total << endl;
    
    return 0;
} /// main