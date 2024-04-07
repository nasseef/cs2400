/**
 *   @file: swap.cc
 * @author: Nasseef Abukamail
 *   @date: February 23, 2024
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream> 
using namespace std;

/// Constants and function prototypes
void swap(int &num1, int &num2);

int main(int argc, char const *argv[]) {
    int first = 10, second = 9999;
    cout << "Before swap" << endl;
    cout << "first = " << first << endl;
    cout << "second = " << second << endl;

    swap(first, second);
    cout << "After swap" << endl;
    cout << "first = " << first << endl;
    cout << "second = " << second << endl;

    return 0;
}  /// main

void swap(int &num1, int &num2) {
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
