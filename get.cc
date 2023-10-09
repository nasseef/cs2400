/**
 *   @file: get.cc
 * @author: Nasseef Abukamail
 *   @date: October 09, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    char ch;
    cout << "Enter a character: ";
    //cin >> ch;
    cin.get(ch);
    while(ch != '\n'){
        cout <<  ch;
        cin.get(ch);
    }
    cout << endl;
    return 0;
} /// main