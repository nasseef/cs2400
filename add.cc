/**
 *   @file: add.cc
 * @author: Nasseef Abukamail
 *   @date: February 19, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
double add(double first, double second);
double add(double first, double second, double third);

int main(int argc, char const *argv[]) {

    cout << add(50, 6) << endl;
    cout << add(4, 5, 6) << endl;
    return 0;
} /// main

double add(double first, double second){
    double result;
    result = first + second;
    return result;
}
double add(double first, double second, double third){
    double result;
    result = first + second + third;
    return result;
}

