/**
 *   @file: do-while.cc
 * @author: Nasseef Abukamail
 *   @date: September 20, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    char answer;
    do
    {
        cout << "Hello" << endl;
        cout << "Do you want to continue (y/n)? ";
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');
    
    return 0;
} /// main