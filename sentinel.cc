/**
 *   @file: sentinel.cc
 * @author: Nasseef Abukamail
 *   @date: February 07, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int total = 0;
    int number;
    cout << "Enter a number: ";
    cin >> number;  //I
    while (number >= 0) //C
    {
        total += number; 
        cout << "Enter a number: ";
        cin >> number; //U
    }
    cout << "Total: " << total << endl;
    return 0;
} /// main