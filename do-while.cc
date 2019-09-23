/*
 *        File: do-while.cc
 *      Author: Nasseef Abukamail
 *        Date: September 23, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {
    char answer;
    int number;
    do{
        do
        {
            cout << "Enter a positive number: ";
            cin >> number;
        }while(number < 0);
        //process it
        cout << "More(y/n)? ";
        cin >> answer;
    }while(answer == 'y' || answer == 'Y');
    return 0;
}// main