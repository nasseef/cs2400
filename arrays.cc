/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: March 06, 2024
 *  @brief: Add Description
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes
void printArray(const int numbers[], int count);
void inputArray(int numbers[], int &count);
int getTotal(const int numbers[], int count);

int main(int argc, char const *argv[]) {
    int numbers[10] = {12, 9, 3, 16, 10, 50, 40};
    int count = 7;
    inputArray(numbers, count);
    printArray(numbers, count);
    cout << "Count is " << count << endl;
    cout << "First number is " << numbers[0] << endl;

    int total = getTotal(numbers, count);
    cout << "Total is " << total << endl;
    cout << endl;
    cout << "Hello";

    return 0;
}  /// main

void printArray(const int numbers[], int count) {
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
}

int getTotal(const int numbers[], int count) {
    int total = 0;
    for (size_t i = 0; i < count; i++) {
        total += numbers[i];
    }
    return total;
}

void inputArray(int numbers[], int &count) {
    ifstream ins;
    ins.open("input.txt");
    if (ins.fail()) {
        cout << "Error";
        exit(0);
    }
    count = 0;
    ins >> numbers[count];
    while (!ins.eof()) {
        count++;
        ins >> numbers[count];
    }

    ins.close();
}
