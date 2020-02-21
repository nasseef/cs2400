/**
 *   @file: functions.cc
 * @author: Nasseef Abukamail
 *   @date: February 21, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes
void printMenu();
void swap(int &first, int &second);
int main(int argc, char const *argv[]) {

    printMenu();
    int x = 5, y = 6;
    swap(x, y);
    cout << "X = " << x << ", y = " << y << endl;
    return 0;
}/// main

void printMenu(){
    cout << "1: do something" << endl;
    cout << "2: quit" << endl;
}
void swap(int &first, int &second){
    int temp = first;
    first = second;
    second = temp;
}