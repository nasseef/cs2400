/**
 *   @file: file-output.cc
 * @author: Nasseef Abukamail
 *   @date: February 27, 2026
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
    ofstream outs;

    //3 create the file 
    outs.open("output.txt", ios::app);
    if (outs.fail())
    {
        cout << "Error creating the file" << endl;
        exit(0);
    }
    //4 use it
    outs << "Hello World" << endl;
    int x = 5;
    outs << setfill('*');
    outs << "The value of x is " << setw(6) << x << endl;
    //5 close the file
    outs.close();
    
    return 0;
} /// main