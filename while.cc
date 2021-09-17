/**
 *   @file: while.cc
 * @author: Nasseef Abukamail
 *   @date: September 17, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    int count;

    count = 0; //1 Initialization 
    while (count < 5) //1.5 Condition
    {
        cout << "Jump" << endl;//2
        count++; // Update count += 1 or count = count + 1
    }
    cout << "Done!" << endl;
    cout << "Count is " << count << endl;
    return 0;
} /// main