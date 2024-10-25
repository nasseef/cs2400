/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: October 18, 2024
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

void getNumbers(int values[], int &count);
void printNumbers(const int values[], int count);

int main(int argc, char const *argv[]) {
    int numbers[10] = {12, 90, 34, 21, 80};
    int count = 5;
    swap(numbers[1], numbers[3]);
    getNumbers(numbers, count); //count will be set by the function
    numbers[count++] = 100;
    
    printNumbers(numbers, count);
    cout << "first element: " << numbers[0] << endl;
    return 0;
}  /// main

void printNumbers(const int values[], int count) {
    for (size_t i = 0; i < count; i++) {
        cout << values[i] << ' ';
    }
    cout << endl;
}

void getNumbers(int values[], int &count) {
    int i = 0;
    cout << "Enter the numbers followed by a negative value: ";
    cin >> values[i];
    while(values[i] >= 0){
        i++;
        cin >> values[i];
    }
    count = i;
}
 