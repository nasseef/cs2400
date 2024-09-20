/**
 *   @file: sentinel-loop.cc
 * @author: Nasseef Abukamail
 *   @date: September 18, 2024
 *  @brief: Example using sentinel loop
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes

int main() {
    double total = 0;
    double score, average;
    int count = 0;
    cout << "Enter a score (negative number to quit): ";
    cin >> score;       // initialization step
    while (score >= 0)  // condition
    {
        count++;
        total += score;
        cout << "Enter a score (negative number to quit): ";
        cin >> score;  // update step
    }
    cout << "Total is " << total << endl;
    if (count > 0) {
        average = total / static_cast<double>(count);
        cout << "Average is " << average << endl;
    }
    else {
        cout << "Average cannot be calculated" << endl;
    }

    return 0;
}  ///
