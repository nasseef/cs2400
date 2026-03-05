/**
 *   @file: files.cc
 * @author: Nasseef Abukamail
 *   @date: February 25, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
//1
#include <fstream>

using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    //2
    ifstream ins;

    //3
    ins.open("charData.txt");
    //important
    if (ins.fail())
    {
        cout << "Error: file not accessible" << endl;
        exit(0);
    }
    
    //4 use it
    //char ch;
    
    // ins.get(ch);
    // while (!ins.eof())
    // {
    //     cout << ch;
    //     ins.get(ch);
    // }
    ofstream outs;
    outs.open("output.txt");
    //check for errors
    string line;

    getline(ins, line);
    while (!ins.eof())
    {
        outs << line << endl;
        getline(ins, line);
        
    }
    
    //5
    ins.close();
    outs.close();
    /*add code*/
    return 0;
} /// main