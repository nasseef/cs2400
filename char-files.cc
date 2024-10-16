/**
 *   @file: input-files.cc
 * @author: Nasseef Abukamail
 *   @date: October 14, 2024
 *  @brief: Add Description
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    //Declare stream objects
    ifstream inputStream;
    ofstream outStream;

    

    // string filename;
    // cin >> filename;
    // inputStream.open(filename);
    inputStream.open("numbers.txt");
    if (inputStream.fail())
    {
        cout << "Error: file does not exist" << endl;
        exit(0);
    }
    
    //open the output file
    outStream.open("numbers-copy.txt");
    if (outStream.fail())
    {
        cout << "Error: file is not accessible" << endl;
        exit(0);
    }
    char ch;
    inputStream.get(ch);
    while (!inputStream.eof()) {
        outStream << ch;
        inputStream.get(ch);
    }

    inputStream.close();
    outStream.close();
    return 0;
}  /// main

