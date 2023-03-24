/**
 *   @file: array-file.cc
 * @author: Nasseef Abukamail
 *   @date: March 22, 2023
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
//linear/sequential search
int search(const int numbers[], int count, int target);
//binary search
int binSearch(const int data[], int count, int target);

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
    int target;
    cout << "Enter a value to search: ";
    cin >> target;
    //int loc = search(numbers, count, target);
    int loc = binSearch(numbers, count, target);

    if (loc == -1)
    {
        cout << "Not found" << endl;
    }
    else {
        cout << target << " was found at location " << loc << endl;
    }
    
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

void printArray(const int numbers[], int count){
    for (size_t i = 0; i < count; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

int search(const int numbers[], int count, int target){
    for (size_t i = 0; i < count; i++)
    {
        if (numbers[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int binSearch(const int data[], int count, int target) {
    int first = 0, mid, last = count - 1;
    while (first <= last) {
        mid = (first + last) / 2;
        if (target == data[mid])
            return mid;
        else if (target < data[mid])
            last = mid - 1;
        else
            first = mid + 1;
    }
    return -1;  // target not found
}
