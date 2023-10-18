/**
 *   @file: input-file-stream.cc
 * @author: Nasseef Abukamail
 *   @date: October 09, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
//1
#include <fstream>

using namespace std;

///Constants and function prototypes
void copy(ifstream &ins, ofstream &outs);

int main(int argc, char const *argv[]) {
    //2
    ifstream inStream;
    ofstream outStream;

    //3 open the file (associate with an external file)
    inStream.open("data.txt");
    if (inStream.fail())
    {
        cout << "Error: file does not exist" << endl;
        exit(0);
    }

    outStream.open("output.txt");
    if (outStream.fail())
    {
        cout << "Error: unable to open the file" << endl;
        exit(0);
    }
    

    //4 read just like cin
    copy(inStream, outStream);
    //5 
    inStream.close();
    outStream.close();
    return 0;
} /// main

void copy(ifstream &ins, ofstream &outs){
    char ch;
    ins.get(ch);
    while (!ins.eof())
    {
        outs << ch;
        ins.get(ch);
    }
}
