/**
 *   @file: argv-argc.cc
 * @author: Nasseef Abukamail
 *   @date: October 18, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    cout << "argc = " << argc << endl;
    cout << "first arg = " << argv[1] << endl;

    return 0;
} /// main