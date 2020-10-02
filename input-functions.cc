/**
 *   @file: input-functions.cc
 * @author: Nasseef Abukamail
 *   @date: October 02, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
    char ch;
    int count = 0;
    //enter characters from the kbd until an ! is encountered
    //count how many characters
    cout << "Enter characters" << endl;
    cin.get(ch);
    while (ch != '!')
    {   
        count++;
        cin.get(ch);
    }

    
    cout << "count is " << count << endl;
    return 0;
} /// main