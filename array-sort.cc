/**
 *   @file: array-file.cc
 * @author: Nasseef Abukamail
 *   @date: March 09, 2023
 *  @brief: Add Description
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes
void loadData(int numbers[], ifstream &ins, int &count);
void printArray(const int numbers[], int count);
int findMin(const int numbers[], int count);
int smallestIndex(const int data[], int startIndex, int endIndex);
void sort(int data[], int count);


int main(int argc, char const *argv[]) {
    int numbers[10];
    // int total = 0;
    int count = 0;
    ifstream ins;
    ins.open("scores.txt");
    if (ins.fail()) {
        cout << "Error: file not accessible" << endl;
        exit(0);
    }

    loadData(numbers, ins, count);
    sort(numbers, count);
    printArray(numbers, count);
    // int smallest = findMin(numbers, count);

    // int minIndex = smallestIndex(numbers, 1, count-1);
    // cout << "Smallest value is located at index " << minIndex << endl;
    // cout << "Smallest value is " << numbers[minIndex] << endl;

    // cout << "Count: " << count << endl;
    ins.close();
    return 0;
}  /// main

void loadData(int numbers[], ifstream &ins, int &count) {
    count = 0;
    ins >> numbers[count];
    while (!ins.eof()) {
        count++;
        ins >> numbers[count];
    }
}

void printArray(const int numbers[], int count) {
    for (size_t i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

int findMin(const int numbers[], int count) {
    int smallest = numbers[0];
    for (size_t i = 1; i < count; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    return smallest;
}

int smallestIndex(const int data[], int startIndex, int endIndex) {
    int min = data[startIndex];
    int minIndex = startIndex;
    for (size_t i = startIndex; i < endIndex; i++) {
        if (data[i] < min) {
            min = data[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void sort(int data[], int count)
{
    int minIndex;
    for (size_t i = 0; i < count - 1; i++)
    {
        minIndex = smallestIndex(data,i, count);
        swap(data[i], data[minIndex]);
    }
}