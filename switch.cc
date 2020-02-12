/**
 *   @file: switch.cc
 * @author: Nasseef Abukamail
 *   @date: February 07, 2020
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// function prototypes

int main(int argc, char const *argv[]) {
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "You entered 1" << endl;
            //break;
        case 2:
        case 3:
            cout << "You entered 2, or 3" << endl;
            break;
        case 4:
            cout << "You entered 4" << endl;
            break;
        default:
            cout << "You entered a choice less than 1 or greater than 4 " << endl;
    }

    return 0;
}  /// main