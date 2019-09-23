/*
 *      Author: Nasseef Abukamail
 *   Date: 2019-09-23
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
//function prototypes

int main() {

    int choice;
    cout << "Enter a choice: ";
    cin >> choice;
    switch (choice) {
        case  1:
            cout << "You entered 1" << endl;
            //break;
        case 2: case 3:
            cout << "You entered 2 or 3" << endl;
            break;
        case 4:
            cout << "You entered 4" << endl;
            break;
        default:
            cout << "done" << endl;
    }
    
    cout << "End of program" << endl;
    return 0;
}
