/**
 *   @file: jump-loop.cc
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

    int numJumps, counter;
    cout << "Enter number of jumps: ";
    cin >> numJumps;
    counter = 0;   //initialization (I)
    while(counter < numJumps){ //Condition (C)
        cout << "Jump" ;
        counter++;  //Update (U)
    }
    return 0;
} /// main