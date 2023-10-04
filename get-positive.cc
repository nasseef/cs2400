/**
 *   @file: get-positive.cc
 * @author: Nasseef Abukamail
 *   @date: October 04, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
int getPositiveInt();
int main(int argc, char const *argv[]) {

    int x = getPositiveInt();
    cout << "x = " << x << endl;
    
    return 0;
} /// main

int getPositiveInt(){
    int num;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> num;
    } while (num < 0);
    return num;
}
