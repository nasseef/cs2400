/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: October 18, 2021
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes
void printArray(const int numbers[], int count);
void readArray(int numbers[], int &count);

int main(int argc, char const *argv[]) {
    // Static arrays
    int numbers[10] = {3, 9, 2, 6, 7, 5, 12};
    int count = 7;

    numbers[0] += 5;
    swap(numbers[1], numbers[3]);
    readArray(numbers, count);
    printArray(numbers, count);
    cout << numbers[0] << endl;
    return 0;
}  /// main

void readArray(int numbers[], int &count){
    int value;
    cout << "Enter a value: ";
    cin >> value;
    int i = 0;
    while (value >= 0)
    {
        numbers[i] = value;
        i++;
        cout << "Enter a value: ";
        cin >> value;
    }
    count = i;
}
void printArray(const int numbers[], int count) {
    for (size_t i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}