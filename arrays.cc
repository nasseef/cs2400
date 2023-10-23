/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: October 23, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
void printArray(const int values[], int size);
void inputValues(int numbers[], int &size);

int main(int argc, char const *argv[]) {
    //intializing an array
    // int numbers[10] = {9, 12, 6, 8, 5};
    int numbers[10];
    int size = 5;
    inputValues(numbers, size);
    // numbers[size] = 34;
    // size++;
    swap(numbers[0], numbers[4]);
    printArray(numbers, size);
    return 0;
} /// main

void printArray(const int values[], int size){
    
    for (size_t i = 0; i < size; i++)
    {
        cout << values[i] << " ";
    }
    cout << endl;
}

void inputValues(int numbers[], int &size){
    cout << "Enter numbers terminated with a negative value" << endl;
    size = 0;
    cin >> numbers[size];
    while(numbers[size] > 0){
        size++;
        cin >> numbers[size];
    }
}
