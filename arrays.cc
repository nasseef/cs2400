/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: October 16, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

void inputAges(int ages[], int &count);

void printAges(const int ages[], int count);

int main(int argc, char const *argv[]) {

    int ages[10] = {3, 9, 12, 16, 5};
    int count = 5;
    inputAges(ages, count);
    printAges(ages, count);
    
    return 0;
} /// main

void printAges(const int ages[], int count){
    for (size_t i = 0; i < count; i++)
    {
        cout << ages[i] << " ";
    }
    cout << endl;
    
}

void inputAges(int ages[], int &count){
    cout << "Enter ages terminated by a negative value" << endl;
    int i = 0;
    cin >> ages[i];
    while(ages[i] > 0){
        i++;
        cin >> ages[i];
    }
    count = i;
}