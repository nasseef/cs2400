/**
 *   @file: for-examples.cc
 * @author: Nasseef Abukamail
 *   @date: May 19, 2020
 *  @brief: Program to demonstrate the for loop.
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[]) {
    // simple counter loop, print 0-4
    
    for (int i = 0; i < 5; i++) 
    {
        cout << i << endl;
    }

    return 0;
}  /// main