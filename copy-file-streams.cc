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
void copy(ifstream &inStream, ofstream &outStream);

int main(int argc, char const *argv[]) {
    ///Step 2 stream object delaration
    string inputFile, outputFile;
    cout << "Enter the input file name: ";
    cin >> inputFile;
    cout << "Enter the output file name: ";
    cin >> outputFile;
    ifstream inStream;
    ofstream outStream;
    ///step 3 connect the stream object to data file
    inStream.open(inputFile);
    if (inStream.fail())
    {
        cout << "Error: file not found" << endl;
        exit(0);
    }
    
    outStream.open(outputFile);
    if (outStream.fail())
    {
        cout << "Error: failed to open output file" << endl;
        exit(0);
    }

    copy(inStream, outStream);

    ///step 4 use the stream 
    
    

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

void copy(ifstream &inStream, ofstream &outStream){
    string line;
    getline(inStream, line);
    while (!inStream.eof())
    {
       outStream << line << endl;
       getline(inStream, line);
    }
    // while (getline(inStream, line))
    // {
    //    outStream << line << endl;
       
    // }
}
