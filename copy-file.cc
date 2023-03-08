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
void copy(ifstream &ins, ofstream &outs);

int main(int argc, char const *argv[]) {

    ifstream inStream;
    ofstream outStream;
    string inputFile = argv[1];
    string outputFile = argv[2];
    inStream.open(inputFile);
    if (inStream.fail())
    {
        cout << "Error" << endl;
        exit(0);
    }

    outStream.open(outputFile);
    if (outStream.fail())
    {
        cout << "Error" << endl;
        exit(0);
    }

    //both files are ready
   
    copy(inStream, outStream);

    inStream.close();
    outStream.close();
    return 0;
} /// main

void copy(ifstream &ins, ofstream &outs){
    string line;
    while (getline(ins, line, '\n'))
    {
        outs << line << endl;
        
    }
}
