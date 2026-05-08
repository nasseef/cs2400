/**
 *   @file: while.cc
 * @author: Nasseef Abukamail
 *   @date: May 18, 2020
 *  @brief: A program to demonstrate the while loop.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
    int count;

    count = 0;
    while (count < 5)
    {
        cout << "Jump " << endl;
        count++;
    }
    cout << endl << "You jumped " << count << " times" << endl;

    return 0;
}/// main