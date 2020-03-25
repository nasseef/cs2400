/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: March 24, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes
void printArray(const int numbers[], int numStudents);
void inputArray(int numbers[], int &numStudents);

int main(int argc, char const *argv[]) {
    //declaration
    int numbers[10] = {15, 20, 5, 35, 30, 10, 25}; //static declaration
    cout << "First element: " << numbers[2] << endl;
    numbers[1] = 12;
    cout << "The number at position 1 is " << numbers[1] << endl;

    int numStudents = 7;
    numbers[numStudents] = 99;
    numStudents++;
    printArray(numbers, numStudents);

    int temp = numbers[0];
    numbers[0] = numbers[numStudents - 1];
    numbers[numStudents - 1] = temp;
    
    inputArray(numbers, numStudents);
    cout << "Number of students: " << numStudents << endl;
    printArray(numbers, numStudents);

    return 0;
}/// main

void printArray(const int numbers[], int numStudents){
    for(int i = 0; i < numStudents; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void inputArray(int numbers[], int &numStudents){
    int num;
    int i = 0;
    cout << "Enter a number: ";
    cin >> num;
    while(num >= 0){
        numbers[i] = num;
        i++;
        cout << "Enter a number: ";
        cin >> num;
    }
    numStudents = i;
} 