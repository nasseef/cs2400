/**
 *   @file: type-casting.cc
 * @author: Nasseef Abukamail
 *   @date: September 13, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int num1 = 40000;
    short num2;

    num2 = static_cast<short>(num1);
    cout << "num2 is " << num2 << endl;

    return 0;
} /// main