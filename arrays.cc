/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: March 04, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
void printArray(const int numbers[], int count);
void readArray(int numbers[], int &count);

int main(int argc, char const *argv[]) {

    int numbers[8] = {15, 19, 12, 6, 17, 23, 77, 99};
    int count = 8;

    readArray(numbers, count);

    printArray(numbers, count);
   
    //string names[] = {"Sue", "Bob", "Lucy"}; //size is implied as 3

    return 0;
} /// main

void readArray(int numbers[], int &count){
    count = 0;
    cout << "Enter the numbers terminated by a negative number: ";
    cin >> numbers[count];
    while (numbers[count] >= 0)
    {
        count++;
        // cout << "Enter a number (negative to quit): ";
        cin >> numbers[count];
    }
    
}
void printArray(const int numbers[], int count){
    for (size_t i = 0; i < count; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
}