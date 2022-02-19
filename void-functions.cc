/**
 *   @file: void-functions.cc
 * @author: Nasseef Abukamail
 *   @date: February 18, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
void displayMenu();
int getPositiveInteger();

int main(int argc, char const *argv[]) {

    displayMenu();
    int choice;
    choice = getPositiveInteger();
    cout << "You entered option " << choice << endl;
    return 0;
} /// main

void displayMenu() {

    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Divide" << endl;
    cout << "4. Multiply" << endl;
    cout << "Enter your choice: ";

} ///displayMenu

int getPositiveInteger(){  //stub
    //TODO
    return 0;
}