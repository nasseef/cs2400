
/**
 *   @file: files.cc
 * @author: Nasseef Abukamail
 *   @date: October 08, 2025
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
/// 1
#include <fstream>

using namespace std;

/// Constants and function prototypes
void copy(ifstream &inp, ofstream &out);
int main(int argc, char const *argv[]) {

    //check that argc is the right value
    if (argc != 3)
    {
        cout << "Error: supply two file names" << endl;
        cout << "Usage: ./a.out file1 file2" << endl;
        exit(0);
    }
    
    /// 2
    ifstream inStream;
    ofstream outStream;
    /// 3
    string inFileName;
    inFileName = argv[1];

    inStream.open(inFileName);
    if (inStream.fail()) {
        cout << "Error: file does not exist" << endl;
        exit(0);
    }

    string outFileName;
    outFileName = argv[2];
    // cout << "Enter an output file name: ";
    // cin >> outFileName;

    outStream.open(outFileName);
    if (outStream.fail())
    {
        cout << "Error: creating output file" << endl;
        exit(0);
    }
    
    /// 4 use it
    copy(inStream, outStream);
 
    
    /// 5
    inStream.close();
    outStream.close();
    return 0;
}  /// main

void copy(ifstream &inp, ofstream &out){
    char ch;
    
    while (inp.get(ch)) {
        out << ch;
    }
}
