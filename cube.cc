/**
 *   @file: cube.cc
 * @author: Nasseef Abukamail
 *   @date: February 17, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes or declaration
int cube(int value); 

int main(int argc, char const *argv[]) {

    int number = 3;
    int numberCubed = cube(number);//function call
    cout << "number cubed is " << numberCubed << endl;
    return 0;
}/// main

int cube(int value){
    int result;
    result = value * value * value;
    return result;
}