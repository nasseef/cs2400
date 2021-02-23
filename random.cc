/**
 *   @file: random.cc
 * @author: Nasseef Abukamail
 *   @date: February 19, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    srand(time(0)); //obtains the current system time
    for (size_t i = 0; i < 5; i++)
    {
        int x = rand() % 12 + 1;
        cout << "x: " << x << endl;
    }
    
    
    return 0;
} /// main