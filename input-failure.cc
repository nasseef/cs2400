/**
 *   @file: input-failure.cc
 * @author: Nasseef Abukamail
 *   @date: September 18, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    double total = 0;
    double score;
    /// this loop quits when the input fails
    cout << "Enter your numbers followed by q: ";
    cin >> score;
    while(!cin.fail()){
        total += score;
        
        cin >> score;
    }
    ///take care of the failure to continue with the program
    if (cin.fail())
    {
       cin.clear(); //clears the fail flag
       cin.ignore(100, '\n');
    }
    
    cout << "Total: " << total << endl;
    return 0;
} /// main