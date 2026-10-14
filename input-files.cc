/**
 *   @file: input-files.cc
 * @author: Nasseef Abukamail
 *   @date: October 12, 2026
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
    //2 create the stream object
    ifstream inStream;

    //3 open the file
    inStream.open("numbers.txt");
    if (inStream.fail())
    {
        cout << "Error: file does not exist" << endl;
        exit(0);
    }
    int num;
    inStream >> num;
    while (!inStream.eof())
    {
        cout << num << endl;
        inStream >> num;
    }
    
    
    inStream.close();

    return 0;
} /// main