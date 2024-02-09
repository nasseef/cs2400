/**
 *   @file: total.cc
 * @author: Nasseef Abukamail
 *   @date: February 07, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    double value;
    double total;
    int count = 0;

    total = 0;
    cout << "Enter a series of numbers followed by a negative value: ";

    cin >> value;  //I
    while(value >= 0){ //C
        total += value;
        ++count;
        cin >> value; //U
    }
    cout << "Total: " << total << endl;
    if (count != 0)
    {
        double average = total / count;
        cout << "Average: " << average << endl;
    }
    else {
        cout << "No average, you did not enter any numbers" << endl;
    }
    

    return 0;
} /// main