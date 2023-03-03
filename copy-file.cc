/**
 *   @file: copy-file.cc
 * @author: Nasseef Abukamail
 *   @date: March 1, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    ifstream inStream;
    ofstream outStream;
    inStream.open("data.txt");
    if (inStream.fail())
    {
        cout << "Error" << endl;
        exit(0);
    }

    outStream.open("output.txt", ios::app);
    if (outStream.fail())
    {
        cout << "Error" << endl;
        exit(0);
    }

    //both files are ready
    string line;
    while (getline(inStream, line, '\n'))
    {
        outStream << line << endl;
        
    }
    
    inStream.close();
    outStream.close();
    return 0;
} /// main