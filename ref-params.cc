/**
 *   @file: ref-params.cc
 * @author: Nasseef Abukamail
 *   @date: October 07, 2019
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes
void swap(int &num1, int &num2);
int main(int argc, char const *argv[]) {

    int number1 = 5, number2 = 6;
    swap(number1, number2);
    cout << "Number 1: " << number1 << " Number 2: " << number2 << endl;
    return 0;
}/// main

void swap(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}