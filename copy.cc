/**
 *   @file: copy.cc
 * @author: Nasseef Abukamail
 *   @date: February 28, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

///function prototypes

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


    //char ch;
    string line;
    getline(ins, line);
    while (!ins.eof())
    {
        outs << line << endl;
        getline(ins, line);
    }

    outs.close();
    ins.close();
    
    
    /*add code*/
    return 0;
}/// main