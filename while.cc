/**
 *   @file: while.cc
 * @author: Nasseef Abukamail
 *   @date: February 10, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
    int num;
    cout << "enter a number: ";
    cin >> num;
    while (num >= 0)
    {
        
        cout << "Number: " << num << endl;
        cout << "enter a number: ";
        cin >> num;
    }
    
    return 0;
}/// main