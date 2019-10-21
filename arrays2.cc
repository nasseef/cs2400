/**
 *   @file: arrays1.cc
 * @author: Nasseef Abukamail
 *   @date: October 18, 2019
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;

/// function prototypes
void add2(int &n);
void loadArray(int numbers[], int &count);
void printArray(const int numbers[], int count);
int main(int argc, char const *argv[]) {
    int numbers[20] = {9, 10, 3, 15, 26, 23, 22, 17, 10, 5};

    add2(numbers[1]);
    cout << numbers[1] << endl;
    cout << (numbers[1] * 2) << endl;
    int count;
    loadArray(numbers, count);
    printArray(numbers, count);
    cout << endl;

    cout << endl;

    return 0;
}  /// main

void add2(int &n) { n += 2; }
void printArray(const int numbers[], int count) {
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
}

void loadArray(int numbers[], ifstream &inStream, int &count){
  
    count = 0;
    inStream >> numbers[count];
    while (!inStream.eof())
    {
        count++;
        inStream >> numbers[count];
    }
    
    // while(inStream >> numbers[count]){
    //     count++;
    // }
}