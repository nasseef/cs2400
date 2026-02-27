/**
 *   @file: file-input.cc
 * @author: Nasseef Abukamail
 *   @date: February 25, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
//1
#include <fstream>

using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    //2
    ifstream ins;

    //3
    ins.open("data.txt");
    //important
    if (ins.fail())
    {
        cout << "Error: file not accessible" << endl;
        exit(0);
    }
    
    //4 use it
    double num;
    int count = 0;
    double total = 0;
   
    while (ins >> num)
    {
        cout << "number is " << num << endl;
        count++;
        total += num;
    }
    if (count > 0)
    {
        cout << "Average is " << (total / count) << endl;
    }
    else {
        cout << "File is empty (no average)" << endl;
    }
    
    //5
    ins.close();
    /*add code*/
    return 0;
} /// main