/**
 *   @file: is-letter.cc
 * @author: Nasseef Abukamail
 *   @date: October 04, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
bool isLetter(char c);
int main(int argc, char const *argv[]) {

    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isLetter(ch))
    {   
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    
    return 0;
} /// main

bool isLetter(char c){
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/// Other versions of the isLetter function

// bool isLetter(char c){
//     if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
//     {
//         return true;
//     }
//     return false;
// }
// bool isLetter(char c){
//     if (c >= 'A' && c <= 'Z')
//     {
//         return true;
//     }
//     else if (c >= 'a' && c <= 'z')
//     {
//         return true;
//     }
//     else {
//         return false;
//     }
    
// }