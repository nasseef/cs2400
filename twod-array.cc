/**
 *   @file: twod-array.cc
 * @author: Nasseef Abukamail
 *   @date: November 03, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
void printArray(int twoD[3][4], int numRows, int numColums);
int main(int argc, char const *argv[]) {

    int twoD[3][4] = {
        {4, 8, 2, 7}, 
        {0, 9, 10, 3},
        {6, 8, 12, 1}
    };

    printArray(twoD, 3, 4);
    return 0;
} /// main

void printArray(int twoD[3][4], int numRows, int numColums){
    for (auto i = 0; i < numRows; i++)
    {
        for (auto j = 0; j < numColums; j++)
        {
            cout << twoD[i][j] << " ";
        }
        cout << endl;
    }
    
}
