/**
 *   @file: switch.cc
 * @author: Nasseef Abukamail
 *   @date: February 2, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    
    int choice;
    ///display a menu of choices
    cout << "Enter a choice: ";
    cin >> choice;
    switch(choice){
        case 1: cout << "choice 1" << endl;
                break;
        case 2: cout << "choice 2" << endl;
                break;
        case 3: ///3 or 4
        case 4: cout << "choice 3 or 4" << endl;
                break;
        default:
            cout << "you entered something else" << endl;
    }
    cout << "Done" << endl;
    return 0;
} /// main