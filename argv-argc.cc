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
    string second = argv[1];
    cout << "second arg = " << second << endl;

    return 0;
} /// main