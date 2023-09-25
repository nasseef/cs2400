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
    
    for ( count = 0; count < numJumps; count++)
    {
        cout << "Jump" << endl;
    }
    
    cout << "Done!" << endl;
    return 0;
} /// main