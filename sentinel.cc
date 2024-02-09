/**
 *   @file: total.cc
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

    double value;
    double total;

    total = 0;
    cout << "Enter a number: ";
    cin >> value;
    while(value >= 0){
        total += value;
        cout << "Enter a number: ";
        cin >> value;
    }
    cout << "Total: " << total << endl;

    return 0;
} /// main