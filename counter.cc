/**
 *   @file: counter.cc
 * @author: Nasseef Abukamail
 *   @date: September 17, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int count = 0;
    int total = 0;
    int num;
    
    while (count < 3)
    {
        cout << "Enter a number: ";
        cin >> num;
        total += num;
        count++;
    }
    cout << "Total is " << total << endl;
    return 0;
} /// main