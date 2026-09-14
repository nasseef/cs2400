/**
 *   @file: switch.cc
 * @author: Nasseef Abukamail
 *   @date: September 14, 2026
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    int choice;
    
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
            case 7:
                cout << "You entered 2 or 7" << endl;
                break;
            case 3:
                cout << "You entered 3" << endl;
                break;
            case 4:
                cout << "You entered 4" << endl;
                break;
            case 5: 
                cout << "Quit" << endl;
                break;
            default:
                cout <<  "Default" << endl;
                     
        }
    
    return 0;
}  /// main