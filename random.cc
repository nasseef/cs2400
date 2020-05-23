/*
 *        File: random.cc
 *      Author: Nasseef Abukamail
 *        Date: May 19, 2020
 * Description: A program to demonstrate random numbers
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {
    srand(time(0));
    for(int i = 0; i < 5; i++)
    {
        int faceValue = rand() % 6 + 1;
        cout << "Die face value: " << faceValue << endl;
    }
    return 0;
}// main

