/**
 *   @file: exp.cc
 * @author: Nasseef Abukamail
 *   @date: February 04, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int num = 6;
    num++; // 7
    num += 6; // 13
    num += 3 + 4 * 5 % 6; //18
    num--;
    num--; // 16

    double num2 = sqrt(num); //4.0
    double num3 = pow(num2, 3); //64.0

    cout << (3.0 + 4 * 5 % 6); //5.0

    return 0;
} /// main