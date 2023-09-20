/**
 *   @file: counting.cc
 * @author: Nasseef Abukamail
 *   @date: September 20, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int numJumps = 5;
    int count = 0;          //Initialization (I)
    while (count < numJumps)    //Condition (C)
    {
        cout << "Jump" << endl;
        count++;            //Update (U)
    }
    
    return 0;
} /// main