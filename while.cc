/*
 *        File: while.cc
 *      Author: Nasseef Abukamail
 *        Date: September 20, 2019
 * Description: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

// function prototypes

int main(int argc, char const *argv[]) {
    // int count = 3;    //Initialization 
    // while (count > 0) //Condition
    // {
    //     cout << "Hello";
    //     count--;      //Update
    // }

    // int total = 0;
    // int count = 0;
    // int number;
    // while (count < 5) {
    //     cout << "Enter a number: ";
    //     cin >> number;
    //     total += number;
    //     count++;
    // }
    // cout << "Total: " << total << endl;


    // int number, total = 0;
    // char answer = 'y';
    // while (answer == 'y') {
    //     cout << "Enter a number: ";
    //     cin >> number;
    //     total += number;
    //     cout << "More numbers(y/n)? ";
    //     cin >> answer;
    // }
    // cout << "Total: " << total << endl;
   
    int number, total = 0;
    //sentinel loop
    cout << "Enter a number, negative to quit: ";
    cin >> number;  //I
    while (number >= 0) //C
    {
        total += number;
        cout << "Enter a number, negative to quit: ";
        cin >> number; //U
    }
    cout << "Total: " << total << endl;
    return 0;
}  // main