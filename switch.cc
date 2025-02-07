/**
 *   @file: switch.cc
 * @author: Nasseef Abukamail
 *   @date: February 3, 2025
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    int choice;
    do {
        cout << "1. first option" << endl;
        cout << "2. second option" << endl;
        cout << "3. third option" << endl;
        cout << "4. Fourth option" << endl;
        cout << "5. Quit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "You entered 1" << endl;
                break;
            case 2:
                cout << "You entered 2" << endl;
                break;
            case 3:
                cout << "You entered 3" << endl;

            case 4:
                cout << "You entered 4" << endl;
                break;
            default:
                cout << "Quit: You entered a choice less than 1 or greater than 4" << endl;
                     
        }
    } while (choice != 5);

    return 0;
}  /// main