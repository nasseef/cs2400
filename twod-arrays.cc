/**
 *   @file: twod-arrays.cc
 * @author: Nasseef Abukamail
 *   @date: March 31, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;

///Constants and function prototypes
void printArray(const int quizzes[][4]);
void printVector(const vector <vector <int>> &quizVector);

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
    
    cout << "==================" << endl;
    vector <vector<int>> quizVector = {
        {2, 3, 4, 5},
        {5, 6, 7, 8},
        {10, 20, 30, 40}
    };
    quizVector.pop_back();
    quizVector.at(1).pop_back();
    printVector(quizVector);
    return 0;
} /// main

void printArray(const int quizzes[][4]){
for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cout << quizzes[i][j] << " ";
        }
        cout << endl;
    }
}

void printVector(const vector <vector <int>> &quizVector){

    for (size_t i = 0; i < quizVector.size(); i++)
    {
        for (size_t j = 0; j < quizVector.at(i).size(); j++)
        {
            cout << quizVector.at(i).at(j) << " ";
        }
        cout << endl;
    }
}


