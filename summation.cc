/**
 *   @file: summation.cc
 * @author: Nasseef Abukamail
 *   @date: May 18, 2020
 *  @brief: Use a while loop to find the sum of all values entered.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    double score;
    double total = 0;
    cout << "Enter a score (negative to quit): ";
    cin >> score;
    while(score >= 0) {
        total = total + score;
        cout << "Enter a score (negative to quit): ";
        cin >> score;
    }
    cout << "The total is " << total << endl;

    return 0;
}/// main