/**
 *   @file: copy.cc
 * @author: Nasseef Abukamail
 *   @date: October 07, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
//1
#include <fstream>

using namespace std;

///function prototypes
void copy(ifstream &ins, ofstream &outs);

int main(int argc, char const *argv[]) {
    // cout << "Number of arguments: " << argc << endl;
    // cout << "Argument: " << argv[1] << endl;
    //2 declaration of streams
    ifstream ins;
    ofstream outs;
    string inputFile, outputFile;

    if (argc != 3)
    {
        cout << "Usage: " << argv[0] << " <input file> <output file>" << endl;
        exit(0);
    }
    
    inputFile = argv[1];
    outputFile = argv[2];

    //3 opening the files
    ins.open(inputFile);
    if (ins.fail())
    {
        cout << "Error: opening input file name" << endl;
        exit(0);
    }

    outs.open(outputFile);
    if (outs.fail())
    {
        cout << "Error: opening output file name" << endl;
        exit(0);
    }

    //4 processing the streams
    copy(ins, outs);
    // copy(inputFile, outputFile);
    
    //5 closing the streams
    ins.close();
    outs.close();
    

    return 0;
} /// main

void copy(ifstream &ins, ofstream &outs){
    //char ch;

    // while (ins.get(ch))
    // {
    //     outs << ch;
    // }
    // ins.get(ch);
    // while (!ins.eof())
    // {
    //     outs << ch;
    //     ins.get(ch);
    // }

    string line;
    while (getline(ins, line))
    {
        outs << line << endl;
    }
    
    
}
