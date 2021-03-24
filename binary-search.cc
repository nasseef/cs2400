/**
 *   @file: search.cc
 * @author: Nasseef Abukamail
 *   @date: March 16, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int binSearch(const int numbers[], int target, int count);

int main(int argc, char const *argv[]) {

    int numbers[] = {2, 9, 12, 16, 17, 20, 25, 30};
    int count = 8;
    int target;
    cout << "Enter a number: ";
    cin >> target;

    int location = binSearch(numbers, target, count);

    if (location == -1)
    {
        cout << target << " not found" << endl;
    }
    else {
        cout << target << " is located at position " << location << endl;
        
    }
    return 0;
} /// main

//sequential/linear search
int binSearch(const int numbers[], int target, int count){
    int first = 0;
    int last = count - 1;
    int mid;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (target == numbers[mid])
        {
            return mid;
        }
        else if (target > numbers[mid]){
            first = mid + 1; //set up to search the right side
        }
        else {
            last = mid - 1; //set up to search the left side
        }
        //end of the loop
    }
    return -1;
}