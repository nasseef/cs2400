/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: October 14, 2020
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
const int SIZE = 10;
/// function prototypes
void printArray(const int numbers[], int count);
void inputArray(int numbers[], int &count);
int getTotal(const int numbers[], int count);

int main(int argc, char const *argv[]) {

    int numbers[SIZE]; //garbage in positions 5-9, 10 elements

    int count;
    
    inputArray(numbers, count);

    cout << "Count is " << count << endl;

    printArray(numbers, count);
    
    int total = getTotal(numbers, count);
    cout << "Total: " << total << endl;
    return 0;
}  /// main

void printArray(const int numbers[], int count){
    for (size_t i = 0; i < count; i++) //size_t === unsigned int
    {
        cout << numbers[i] << endl;
    }
    
}

void inputArray(int numbers[], int &count){
    count = 0;

    cout << "Enter numbers terminated by a negative value" << endl;
    int num;
    cin >> num;
    while (num >= 0)
    {
        numbers[count] = num;
        count++;
        cin >> num;
    }
}

int getTotal(const int numbers[], int count){
    int sum = 0;
    for (size_t i = 0; i < count; i++)
    {
        sum += numbers[i];
    }
    return sum;
}