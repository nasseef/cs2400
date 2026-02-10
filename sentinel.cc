/**
 *   @file: sentinel.cc
 * @author: Nasseef Abukamail
 *   @date: February 09, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    double num;
    double total = 0;
    double count = 0;
    cout << "Enter a number (-1 to quit): ";
    cin >> num;
    while (num != -1)
    {
        total += num;
        count++;
        cout << "Enter a number (-1 to quit): ";
        cin >> num;
    }
    cout << "Total: " << total << endl;
    cout << "Count: " << count << endl;
    if (count > 0)
    {
        double average = total / count;
        cout << "Average: " << average << endl;
    }else {
        cout << "NO average" << endl;
    }
    
    return 0;
} /// main