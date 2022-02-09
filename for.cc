/**
 *   @file: for.cc
 * @author: Nasseef Abukamail
 *   @date: February 09, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    size_t i;
    //size_t is unsigned int
    for (i = 0; i < 5; i++)
    {
        cout << "Hello" << endl;
    }
    cout << i << endl;
    
    return 0;
} /// main