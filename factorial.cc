/**
 *   @file: factorial.cc
 * @author: Nasseef Abukamail
 *   @date: May 26, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes
int factorial(int n);
int main(int argc, char const *argv[]) {

    cout << "Factorial: " << factorial(0) << endl;
    return 0;
}/// main

int factorial(int n){
    int mult = 1;
    for (int i = 2; i <= n; i++)
    {
        mult = mult * i;
    }
    return mult;
}