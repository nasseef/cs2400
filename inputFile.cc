/**
 *   @file: outputFile.cc
 * @author: Nasseef Abukamail
 *   @date: February 26, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
//1. include files library
#include <fstream>

using namespace std;

///Constants and function prototypes
void copy(ifstream &ins, ofstream &outs);
void copyString(ifstream &ins, ofstream &outs);
int main(int argc, char const *argv[]) {

    string inputFilename;
    string outputFilename;
    //2. declare a stream object
    ifstream inStream;
    ofstream outStream;
   
    cout << "What is the input file name? ";
    cin >> inputFilename;
    cout << "What is the output file name? ";
    cin >> outputFilename;
    //3.Open the stream and check for failure
    inStream.open(inputFilename);

    if (inStream.fail()) //verifies that the open command worked
    {
        cout << "Error: file is not found" << endl;
        return 0;
    }

    outStream.open(outputFilename);
    if (outStream.fail())
    {   
        cout << "Error opening the file" << endl;
        return 0;
    }
    

    //4.Use it just like cin
    //copy(inStream, outStream);
    copyString(inStream, outStream);
    //5. close the stream
    inStream.close();
    outStream.close();
    
    return 0;
} /// main

void copy(ifstream &ins, ofstream &outs){
    char ch;
    ins.get(ch); //same as >> except it reads white spaces
    while (!ins.eof())
    {
        outs << ch;
        ins.get(ch);
    }
}

void copyString(ifstream &ins, ofstream &outs){
    string line;
    getline(ins, line); //same as >> except it reads white spaces
    while (!ins.eof())
    {
        outs << line << endl;
        getline(ins, line);
    }
}