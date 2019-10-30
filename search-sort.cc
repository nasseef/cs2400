/**
 *   @file: bin-search.cc
 * @author: Nasseef Abukamail
 *   @date: October 25, 2019
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// function prototypes
void printArray(const int numbers[], int count);
int indexOfSmallest(const int data[], int startIndex, int endIndex);
void sort(int data[], int count);
int binSearch(const int data[], int count, int target);

int main(int argc, char const *argv[]) {
    //int numbers[20] = {3, 50, 11, 2, 4, 18, 17, 22, 20, 15};
    int numbers[20] = {2, 3, 4, 11, 15, 17, 18, 20, 22, 50};
    int count = 10;
   
    cout << endl;
    return 0;

}  /// main
void printArray(const int numbers[], int count) {
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
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

// Include starting and ending index
int indexOfSmallest(const int data[], int startIndex, int endIndex) {
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
    for (size_t i = 0; i< count - 1; i++)
    {
        minIndex = indexOfSmallest(data,i, count);
        swap(data[i], data[minIndex]);
    }
}