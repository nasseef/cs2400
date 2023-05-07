/**
 *   @file: copy.cc
 * @author: Nasseef Abukamail
 *   @date: June 4, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

///function prototypes
/**
 * copy: copies characters from the input stream to the
 *       output stream
 * @param ins - successfully opened input stream
 * @param outs - successfully opened output stream
 */
void copy(ifstream &ins, ofstream &outs);

int main(int argc, char const *argv[]) {
    ifstream ins;
    ofstream outs;
    ins.open("chars.txt");
    if (ins.fail())
    {
        cout << "Error" << endl;
        exit(0);
    }
    outs.open("chars2.txt");
    if(outs.fail())
    {
        cout << "Error opening output file" << endl;
        exit(0);
    }

    //copy the file
    copy(ins, outs);

    outs.close();
    ins.close();
    
    
    /*add code*/
    return 0;
}/// main

void copy(ifstream &ins, ofstream &outs){
    char ch;
    ins.get(ch);
    while (!ins.eof())
    {
        outs << ch;
        ins.get(ch);
    }
}