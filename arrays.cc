/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: October 17, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
int indexOfSmallest(const int data[], int start, int count);

///Selection sort
void sort(int data[], int count);
void printArray(const int data[], int count);

int main(int argc, char const *argv[]) {

    int numbers[20] = {20, 15, 60, 7, 55, 40, 30, 25, 80, 45, 17};
    int count = 11;
    for (size_t i = 0; i < count; i++)
    {
        cin >> numbers[i];
    }
    
    //int index = indexOfSmallest(numbers, 0, count);
    printArray(numbers, count);
    sort(numbers, count);
    printArray(numbers, count);


    return 0;
} /// main

int indexOfSmallest(const int data[], int start, int count){
    int smallest = data[start];
    int index = start;
    for (int i = start + 1; i < count; i++)
    {
        if (data[i] < smallest)
        {
            smallest = data[i];
            index = i;
        }
        
    }
    return index;
}

void sort(int data[], int count){
    for (size_t i = 0; i < count - 1; i++)
    {
        int index = indexOfSmallest(data, i, count);
        swap(data[i], data[index]);
    }
}

void printArray(const int data[], int count){
    for (size_t i = 0; i < count; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

