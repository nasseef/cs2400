/**
 *   @file: for.cc
 * @author: Nasseef Abukamail
 *   @date: September 18, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
    //size_t is unsigned int

    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }
  
    cout << "**************" << endl;
    int j = 0;
    while (j < 5)
    {
        cout << j << endl;
        j++;
    }
    cout << j << endl;
    cout << "**************" << endl;
    
    return 0;
} /// main