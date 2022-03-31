/**
 *   @file: sort-vector.cc
 * @author: Nasseef Abukamail
 *   @date: March 23, 2022
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

/// Constants and function prototypes
int indexOfSmallest(vector<int> data, int startIndex, int endIndex);
void sort(vector<int> &data);

int main(int argc, char const *argv[]) {
    vector<int> data = {99, 30, 20, 50, 60, 40, 10, 100};
    sort(data);
    for (size_t i = 0; i < data.size(); i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}  /// main

int indexOfSmallest(vector<int> data, int startIndex, int endIndex) {
    int min = data[startIndex];
    int minIndex = startIndex;
    for (size_t i = startIndex; i < endIndex; i++) {
        if (data[i] > min) {
            min = data[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void sort(vector<int> &data) {
    int minIndex;
    for (size_t i = 0; i < data.size() - 1; i++) {
        minIndex = indexOfSmallest(data, i, data.size());
        swap(data[i], data[minIndex]);
    }
}