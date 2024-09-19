/**
 *   @file: sentinel-loop.cc
 * @author: Nasseef Abukamail
 *   @date: September 18, 2024
 *  @brief: Example using sentinel loop
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

/// Constants and function prototypes

int main()
{

    double total = 0;
    double score;
    cout << "Enter a score (negative number to quit): ";
    cin >> score;  //initialization step
    while (score >= 0) //condition
    {
        total += score;
        cout << "Enter a score (negative number to quit): ";
        cin >> score;   //update step
    }
    cout << "Total is " << total << endl;
    return 0;
} ///
