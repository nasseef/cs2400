/**
 *   @file: for.cc
 * @author: Nasseef Abukamail
 *   @date: September 24, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    srand(time(nullptr));
    
    for (size_t i = 0; i < 5; i++)
    {
        cout << rand() << endl;
    }
    
    return 0;
} /// main