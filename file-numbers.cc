/**
 *   @file: file-numbers.cc
 * @author: Nasseef Abukamail
 *   @date: October 15, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    ifstream ins;
    ins.open("scores.txt");
    if (ins.fail())
    {
        cout << "Error: file not found" << endl;
        exit(0);
    }
    double number;
    double total = 0;
    int count = 0;
    
    while (ins >> number)
    {
        total += number;
        count++;
    }
    cout << "Total: " << total << endl;
    if (count != 0)
    {
        cout << "Average: " << (total / count) << endl;
    }
    else {
        cout << "Error: the file is empty" << endl;
    }
    ins.close();
    return 0;
} /// main