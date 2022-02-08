/**
 *   @file: jump.cc
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

    int numValues;
    int number;
    int total = 0;
    cout << "How many integers? ";
    cin >> numValues;
    int count = 0;    //initialization step
    while (count < numValues)  //Condition
    {
        cout << "Enter a number: ";
        cin >> number;
       total += number;
       count += 1;     //Update step
    }
    cout << "Total: " << total << endl;
    cout << "done" << endl;

    
    return 0;
} /// main