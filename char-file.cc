/**
 *   @file: char-file.cc
 * @author: Nasseef Abukamail
 *   @date: February 27, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    ifstream inStream;

    inStream.open("data.txt");
    if (inStream.fail())
    {
        cout << "Error" << endl;
        exit(0);
    }
    char ch;
    //inStream.get(ch);
    string line;
    getline(inStream, line, '\n');
    while (!inStream.eof())
    {
        cout << line << endl;
        //inStream.get(ch);
        getline(inStream, line, '\n');

    }
   
    while (getline(inStream, line, '\n'))
    {
        cout << line << endl;
        //inStream.get(ch);

    }
    
    inStream.close();
    return 0;
} /// main