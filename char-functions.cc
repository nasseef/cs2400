/**
 *   @file: functions-examples-2.cc
 * @author: Nasseef Abukamail
 *   @date: May 26, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>

using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    char ch = '8';

    if (isalpha(ch))
    {
        cout << "Character is a letter" << endl;
    }

    if (isupper(ch))
    {
        cout << "Character is an upper case letter" << endl;
    }

    if (islower(ch))    
    {
        cout << "Character is a lower case letter" << endl;
    }
    
    if (isdigit(ch))
    {
        cout << "Character is a digit" << endl;
    }

    if (isspace(ch))
    {
        cout << "Character is a whitespace" << endl;
    }
    
    
    
    
    return 0;
}/// main