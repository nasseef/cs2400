/**
 *   @file: input-output-files.cc
 * @author: Nasseef Abukamail
 *   @date: March 03, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>   ///step 1
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    ///Step 2 stream object delaration
    ifstream inStream;
    ofstream outStream;
    ///step 3 connect the stream object to data file
    inStream.open("data.txt");
    if (inStream.fail())
    {
        cout << "Error: file not found" << endl;
        exit(0);
    }
    
    outStream.open("output.txt", ios::app);
    if (outStream.fail())
    {
        cout << "Error: failed to open output file" << endl;
        exit(0);
    }

    ///step 4 use the stream 
    char ch;
    inStream.get(ch);
    while (!inStream.eof())
    {
       outStream << ch;
       inStream.get(ch);
    }
    

    // inStream >> ch;
    // cout << ch << endl;

    // string line;
    // getline(inStream, line);
    // cout << line << endl;
    // getline(inStream, line);
    // cout << line << endl;
    ///step 5 close the stream
    inStream.close();
    outStream.close();
    
    return 0;
} /// main