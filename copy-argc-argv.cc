/**
 *   @file: input-files.cc
 * @author: Nasseef Abukamail
 *   @date: February 28, 2024
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
// 1
#include <fstream>
using namespace std;

/// Constants and function prototypes
void copy(ifstream &ins, ofstream &outs);
int main(int argc, char const *argv[]) {
    //Warning: check (argc == 3) to avoid segmentation fault

    // 2
    ifstream inStream;
    ofstream outStream;

    // 3
    string inputFileName;
    inputFileName = argv[1];

    inStream.open(inputFileName);
    if (inStream.fail()) {
        cout << "Error: file does not exist" << endl;
        exit(0);
    }
    string outputFileName;
    outputFileName = argv[2];
    outStream.open(outputFileName);
    // check for failure
    if (outStream.fail()) {
        cout << "Error: file cannot be created" << endl;
        exit(0);
    }

    // 4 use the stream just like cin
    copy(inStream, outStream);
    
    // 5
    inStream.close();
    outStream.close();
    return 0;
}  /// main

void copy(ifstream &ins, ofstream &outs) {
    string line;
    while (getline(ins, line)) {
        outs << line << endl;
    }
}
