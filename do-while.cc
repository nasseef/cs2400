/**
 *   @file: do-while.cc
 * @author: Nasseef Abukamail
 *   @date: September 22, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int choice;
    do{
        cout << "1. add two numbers" << endl;
        cout << "2. subtract" << endl;
        cout << "3. multiply" << endl;
        cout << "4. quit" << endl|;
        cout << "Enter your choice: ";
        cin >> choice;
    }while(choice != 4);
    return 0;
} /// main