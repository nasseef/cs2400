/**
 *   @file: input-files-funcitons.cc
 * @author: Nasseef Abukamail
 *   @date: October 12, 2026
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
// 1
#include <fstream>
using namespace std;

/// Constants and function prototypes
void copy(ifstream &inStream, ofstream &outStream);

int main(int argc, char const* argv[]) {
    // 2 create the stream object
    ifstream inStream;
    ofstream outStream;

    if (argc != 3)
    {
        cout << "Usage: ./copy file1 file2" << endl;
        exit(0);
    }
    
    // 3 open the file

    string inputFN, outputFN;
    inputFN = argv[1];
    outputFN = argv[2];

    inStream.open(inputFN);
    if (inStream.fail()) {
        cout << "Error: file does not exist" << endl;
        exit(0);
    }
    outStream.open(outputFN);
    if (inStream.fail()) {
        cout << "Error: creating the file" << endl;
        exit(0);
    }

    
    //char ch;
    // inStream.get(ch);
    copy(inStream, outStream);
    

    inStream.close();
    outStream.close();
    return 0;
}  /// main

void copy(ifstream &inStream, ofstream &outStream){
    string line;
    
    while (getline(inStream, line)) {
        outStream << line << endl;
    }

}
