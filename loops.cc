/**
 *   @file: for.cc
 * @author: Nasseef Abukamail
 *   @date: February 12, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
    int i;
    for (i = 0; i < 5; ++i)
    {
       cout << "Hello ";
    }
    cout << i;
    cout << endl;
    
    char answer;
    do
    {
        cout << "Hello " << endl;
        cout << "More(y/n)? ";
        cin >> answer;   
    } while (answer == 'y');
    
    return 0;
}/// main