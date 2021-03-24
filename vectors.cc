/**
 *   @file: vectors.cc
 * @author: Nasseef Abukamail
 *   @date: March 22, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;

///Constants and function prototypes
void readScores(vector <double> &scores);
void printScores(vector <double> scores);
double getTotal(vector <double> scores);

int main(int argc, char const *argv[]) {
    vector <double> scores;

    if (scores.empty()) // scores.size() == 0
    {
        cout << "vector is empty" << endl;
    }
    
    readScores(scores);

    cout << scores.front() << endl;
    cout << scores.back() << endl; //cout << scores.at(scores.size() - 1)

    //scores.erase(scores.begin() + 2);
    scores.erase(scores.begin() + 1, scores.begin() + 3);

    scores.insert(scores.begin() + 2, 99);
    printScores(scores);
    cout << "Size: " << scores.size() << endl;

    double total = getTotal(scores);
    cout << "Total is " << total << endl;
    return 0;
} /// main

void readScores(vector <double> &scores){
    double scr;
    cout << "Enter a score: ";
    cin >> scr;
    while (scr >= 0)
    {
        scores.push_back(scr);
        cout << "Enter a score: ";
        cin >> scr;
    }
    
}

void printScores(vector <double> scores){
    for (size_t i = 0; i < scores.size(); i++)
    {
        cout << scores.at(i) << endl;
    }
    
}


double getTotal(vector <double> scores){
    double total = 0;
    for (size_t i = 0; i < scores.size(); i++)
    {
        total += scores.at(i);
    }
    return total;
}
