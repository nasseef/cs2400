/**
 *   @file: reading-chars.cc
 * @author: Nasseef Abukamail
 *   @date: September 25, 2019
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    char ch;
    int countCapitals = 0;
    int countDigits = 0;
    cout << "Eneter some characters" << endl;
    cin.get(ch);
    while (ch != '\n')
    {   
        //if (ch >= 'A' && ch <= 'Z')
        if(isupper(ch))
        {
            countCapitals++;
        }
        //else if (ch >= '0' && ch <= '9')
        if(isdigit(ch))
        {
            countDigits++;
        }
        cin.get(ch);
    }
    cout << "# of capital letters " << countCapitals << endl;
    cout << "# of digits " << countDigits << endl;
    return 0;
}/// main