/**
 *   @file: sentinel.cc
 * @author: Nasseef Abukamail
 *   @date: September 17, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int total = 0;
    int number;
    int count = 0;
    double average;
    cout << "Enter some numbers terminated by a negative: ";
    cin >> number;  //1
    while (number >= 0) //2
    {
        total += number; //3 process
        count++;
        //cout << "Enter a number: ";
        cin >> number; //4 update
    }
    cout << "Total is " << total << endl;
    if (count > 0)
    {
        average = static_cast<double>(total) / count;
        cout << "Average is " << average << endl;
    }
    else{
        cout << "You did not enter any numbers " << endl;
    }
    return 0;
} /// main
