/**
 *   @file: do-while-menu.cc
 * @author: Nasseef Abukamail
 *   @date: May 19, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    int choice;
    do
    {
        cout << "1. Add" << endl;
        cout << "2. Subtract " << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: cout << "Doing addition" << endl;
            break;
            case 2: cout << "Doing subtraction" << endl;
            break;
            case 3: cout << "Doing multiplication" << endl;
            break;
            case 4: cout << "Doing division" << endl;
            break;
            default: cout << "Quitting ..." << endl;
        }
    } while (choice != 5);
    
    cout << "End of program " << endl;
    return 0;
}/// main