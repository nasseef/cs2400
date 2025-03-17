/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: March 07, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
void inputNumbers(int numbers[], int &count);

void printArray(const int numbers[], int count);

int main(int argc, char const *argv[]) {

    int count;
    int numbers[8] = {5, 12, 6, 3, 4, 9, 7, 8};
    inputNumbers(numbers, count);
    //count = inputNumbers(numbers);
    numbers[count] = 99;
    count++;
    printArray(numbers, count);

    return 0;
} /// main

void inputNumbers(int numbers[], int &count){
    count = 0;
    int num;
    cout << "Enter integers terminated by a negative number" << endl;
    cin >> num;
    while (num >= 0)
    {
        numbers[count] = num;
        count++;
        cin >> num;
    }
    
}

void printArray(const int numbers[], int count){
    for (size_t i = 0; i < count; i++)
    {
        cout << numbers[i] << ", ";
    }
    cout << endl;
}
