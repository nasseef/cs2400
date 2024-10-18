/**
 *   @file: input-files.cc
 * @author: Nasseef Abukamail
 *   @date: October 16, 2024
 *  @brief: Add Description
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/// Constants and function prototypes
void copy(ifstream &ins, ofstream &outs);

int main(int argc, char const *argv[]) {

    if (argc != 3)
    {
        cout << "Usage: " << argv[0] << " file1 file2" << endl;
        exit(0);
    }
    
    //Declare stream objects
    ifstream inputStream;
    ofstream outStream;

    

    string filename;
    filename = argv[1];
    // cout << "Enter input file: ";
    // cin >> filename;
    inputStream.open(filename);
    // inputStream.open("numbers.txt");
    if (inputStream.fail())
    {
        cout << "Error: file does not exist" << endl;
        exit(0);
    }
    
    //open the output file
    string outFilename;
    outFilename = argv[2];
    // cout << "Enter output file name: ";
    // cin >> outFilename;
    outStream.open(outFilename);
    //outStream.open("numbers-copy.txt");
    if (outStream.fail())
    {
        cout << "Error: file is not accessible" << endl;
        exit(0);
    }
    copy(inputStream, outStream);
    

    inputStream.close();
    outStream.close();
    return 0;
}  /// main

void copy(ifstream &ins, ofstream &outs) {
    char ch;
    ins.get(ch);
    while (!ins.eof()) {
        outs << ch;
        ins.get(ch);
    }
}
