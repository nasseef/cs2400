/**
 *   @file: formatting.cc
 * @author: Nasseef Abukamail
 *   @date: February 03, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    cout << 3 << endl;
    cout << left << setfill('*') << setw(5) << 3 << setw(5) << 4 << "|" << endl;
    return 0;
}/// main