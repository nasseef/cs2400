/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: March 14, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

///Constants and function prototypes

void printArray(int numbers[], int count);
int getTotal(int numbers[], int count);
int main(int argc, char const *argv[]) {

    int numbers[15000] = {12, 9, 3, 16, 10, 1, 4, 6, 8, 15};
    int count = 10;
    printArray(numbers, count);
    swap(numbers[0], numbers[5]);
    printArray(numbers, 5);

    // swap(numbers[1], numbers[2]);

    
    

    return 0;
} /// main

void printArray(int numbers[], int count){
    for (int i = 0; i < count; i++)
        {
            cout << numbers[i] << " ";
        }
        cout << endl;
}