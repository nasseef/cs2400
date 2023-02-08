/**
 *   @file: switch.cc
 * @author: Nasseef Abukamail
 *   @date: January 31, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    
    int score;
    cout << "Enter a score: ";
    cin >> score;
    switch(score){
        case 1: {
                cout << "poor" << endl;
                break;
        }
        case 2: cout << "average" << endl;
                break;
        case 3: cout << "good" << endl;
                break;
        case 4: cout << "very good" << endl;
                break;
        case 5: cout << "excellent" << endl;
                break;
        default:
            cout << "you entered something else" << endl;
    }
    cout << "Done" << endl;
    return 0;
} /// main