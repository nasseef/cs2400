/**
 *   @file: outputs-stream.cc
 * @author: Nasseef Abukamail
 *   @date: October 05, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
    int number = 50;
    ofstream outStream;
    outStream.open("data2.txt", ios::app);
    if (outStream.fail())
    {
        cout << "Error: file failed to open" << endl;
        exit(0);
    }
    outStream << "Hello World again" << endl;
    outStream << setfill('*');
    outStream << "The number is " << setw(20) << (number * number) << endl;

    outStream.close();
    /*add code*/
    return 0;
} /// main