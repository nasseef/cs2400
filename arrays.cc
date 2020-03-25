/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: March 24, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
    //declaration
    int numbers[10] = {15, 20, 5, 35, 30, 10, 25};
    cout << "First element: " << numbers[2] << endl;
    numbers[1] = 12;
    cout << "The number at position 1 is " << numbers[1] << endl;

    int numStudents = 7;
    numbers[numStudents] = 99;
    numStudents++;
    for(int i = 0; i < numStudents; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    int temp = numbers[0];
    numbers[0] = numbers[numStudents - 1];
    numbers[numStudents - 1] = temp;

    for(int i = 0; i < numStudents; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}/// main