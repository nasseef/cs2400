/**
 *   @file: array.cc
 * @author: Nasseef Abukamail
 *   @date: March 08, 2021
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes
void printNumbers(const int numbers[], int count);
void readNumbers(int numbers[], int &count);

int getTotal(const int numbers[], int count);

int main(int argc, char const *argv[]) {
    // 7 is the maximum size of the array
    int numbers[100]; // = {12, 9, 2, 16, 3, 15, 20};
    
    int count;

    readNumbers(numbers, count);

    printNumbers(numbers, count);

    int total = getTotal(numbers, count);
    cout << "Total is " << total << endl;
    return 0;
}  /// main

void printNumbers(const int numbers[], int count) {
    for (size_t i = 0; i < count; i++) {
        cout << numbers[i] << endl;
    }
}


void readNumbers(int numbers[], int &count){
    //4 6 7 8 -9
    int i = 0;
    cout << "Enter a number: ";
    cin >> numbers[i];
    while (numbers[i] >= 0)
    {
        i++;
        cout << "Enter a number: ";
        cin >> numbers[i];
    }
    count = i;
    
}

int getTotal(const int numbers[], int count){
    int total = 0;
    //size_t ==> unsigned int
    for (size_t i = 0; i < count; i++)
    {
        total += numbers[i];
    }
    return total;
}