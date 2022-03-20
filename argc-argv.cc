/**
 *   @file: argc-argv.cc
 * @author: Nasseef Abukamail
 *   @date: March 18, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    cout << "argc: " << argc << endl;
    for (size_t i = 0; i < argc; i++)
    {
        string temp = argv[i];
        cout << "Arg " << i << ": " << temp << endl;
    }
    
    
    return 0;
} /// main