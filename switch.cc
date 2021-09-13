/**
 *   @file: switch.cc
 * @author: Nasseef Abukamail
 *   @date: September 13, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int choice;
cout << "Enter your choice: ";
cin >> choice;
switch(choice) {
	case 1: 	
          cout << "You entered 1" << endl;
	
	case 2: case 3: //or
          cout << "You entered 2, or 3" << endl;
	    break;
	case 4: 	
          cout << "You entered 4" << endl;  
	    break;
	default:
	   cout << "You entered a choice less than 1 or greater than 4" << endl;
}

    return 0;
} /// main