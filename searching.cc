/*
 *        File: searching.cc
 *      Author: Nasseef Abukamail
 *        Date: October 23, 2020
 * Description: Demonstarate sequential search and binary search.
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

// function prototypes

int search(int data[], int count, int target);
//sequential search of unordered array

int binSearch(const int data[], int count, int target);
//binary search of an ordered array.

int main(int argc, char const *argv[]) {
    int data[16] = {4, 9, 1, 10, 20, 50, 30, 55, 60, 45, 3, 12, 33, 44, 22, 15};
   int data2[16] = {1, 3, 4, 9, 10, 12, 15, 20, 22, 30, 33, 44, 45, 50, 55, 60};

    int count = 16;

    int target;
    cout << "Enter a value to search: ";
    cin >> target;

    int location = search(data, count, target);

    if (location == -1) {
        cout << target << " not found" << endl;
    } else {
        cout << target << " is located at position " << location << endl;
    }
    
    cout << "Searching a sorted array" << endl;
    cout << "Enter a value to search: ";
    cin >> target;

    location = binSearch(data2, count, target);

    if (location == -1) {
        cout << target << " not found" << endl;
    } else {
        cout << target << " is located at position " << location << endl;
    }
    return 0;
}

int search(int data[], int count, int target) {
    for (int i = 0; i < count; i++) {
        if (target == data[i]) {
            return i;
        }
    }
    return -1;  //target not found
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
