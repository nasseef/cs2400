/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: October 18, 2019
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// function prototypes
void add2(int &n);
void printArray(const int numbers[], int count);
void loadArray(int numbers[], int &count);
int main(int argc, char const *argv[]) {
    int numbers[20] = {9, 10, 3, 15, 26, 23, 22, 17, 10, 5};

    cout << numbers[3] << endl;
    cout << (numbers[2] * 2) << endl;
    add2(numbers[0]);
    cout << numbers[0] << endl;

    int count = 10;
    loadArray(numbers, count);
    printArray(numbers, count);
    cout << endl;

    return 0;
}  /// main

void add2(int &n) { n += 2; }

void loadArray(int numbers[], int &count) {
    count = 0;
    cout << "Enter a number: ";
    cin >> numbers[count];
    while (numbers[count] >= 0) {
        count++;
        cout << "Enter a number: ";
        cin >> numbers[count];
    }
}
void printArray(const int numbers[], int count) {
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
}