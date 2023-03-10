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
void printArray(int numbers[], int count);
int main(int argc, char const *argv[]) {
    int numbers[10];
    //int total = 0;
    int count = 0;
    ifstream ins;
    ins.open("scores.txt");
    if (ins.fail())
    {
        cout << "Error: file not accessible" << endl;
        exit(0);
    }
    
  
    loadData(numbers, ins, count);
    
    printArray(numbers, count);
    cout << "Count: " << count << endl;
    ins.close();
    return 0;
}  /// main

void loadData(int numbers[], ifstream &ins, int &count){
    count = 0;
    ins >> numbers[count];
    while (!ins.eof()) {
        count++;
        ins >> numbers[count];
    }
}

void printArray(int numbers[], int count){
    for (size_t i = 0; i < count; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}
