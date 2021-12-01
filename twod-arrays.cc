/**
 *   @file: twod-arrays.cc
 * @author: Nasseef Abukamail
 *   @date: December 01, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
void printArray(int quizzes[][4]);
int main(int argc, char const *argv[]) {
    int quizzes[3][4] = {
        {2, 3, 4, 5},
        {5, 6, 7, 8},
        {10, 20, 30, 40}
    };

    cout << "Enter a quiz score: ";
    cin >> quizzes[0][0];
    swap(quizzes[0][0], quizzes[2][0]);
    //double x = sqrt(quizzes[0][0]);

    printArray(quizzes);
    
    return 0;
} /// main

void printArray(int quizzes[][4]){
for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cout << quizzes[i][j] << " ";
        }
        cout << endl;
    }
}