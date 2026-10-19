/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: October 19, 2026
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

void inputAges(int ages[], int& count);

void printAges(const int ages[], int count);

int smallestIndex(const int data[], int startIndex, int endIndex);

int main(int argc, char const* argv[]) {
    int ages[10] = {7, 5, 3, 9, 11, 2, 12, 4 };
    
    int count = 8;
    //inputAges(ages, count);
    printAges(ages, count);

    cout << "Smallest index: " << smallestIndex(ages, count) << endl;;
    return 0;
}  /// main

void printAges(const int ages[], int count) {
    for (size_t i = 0; i < count; i++) {
        cout << ages[i] << " ";
    }
    cout << endl;
}

void inputAges(int ages[], int& count) {
    cout << "Enter ages terminated by a negative value" << endl;
    int i = 0;
    cin >> ages[i];
    while (ages[i] > 0) {
        i++;
        cin >> ages[i];
    }
    count = i;
}

int smallestIndex(const int data[], int startIndex, int endIndex) {
    int min = data[startIndex];
    int location = startIndex;
    for (size_t i = startIndex + 1; i < endIndex; i++) {
        if (data[i] < min) {
            min = data[i];
            location = i;
        }
    }
    return location;
}
