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

int main(int argc, char const *argv[]) {
    //2
    ifstream inStream;

    //3 open the file (associate with an external file)
    inStream.open("data.txt");
    if (inStream.fail())
    {
        cout << "Error: file does not exist" << endl;
        exit(0);
    }
    char ch;
    //4 read just like cin
    inStream.get(ch);
    while (!inStream.eof())
    {
        cout << ch;
        inStream.get(ch);
    }
    //5 
    inStream.close();
    return 0;
} /// main