/**
 *   @file: while-loop.cc
 * @author: Nasseef Abukamail
 *   @date: September 16, 2020
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[]) {
    // int count = 0;  //Initialization 
    // while (count < 5) //condition
    // {
    //     cout << "Jump" << endl;
    //     count++; //update
    // }
    
    //sentinel loop
    double total = 0;
    double score;
    int count = 0;  //number of values read
    cout << "Enter a score: ";
    cin >> score;  //initialization
    while (score >= 0) //condition
    {
        count++;
        total += score;
        cout << "Enter a score: ";
        cin >> score; //update
    }
    
    double average;
    //check for zero before division
    average = total / count;
    cout << "Total is " << total << endl;
    cout << "Average is " << average << endl;
    return 0;
}  /// main