/**
 *   @file: files-chars.cc
 * @author: Nasseef Abukamail
 *   @date: October 09, 2019
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    ifstream inStream;  //input stream object
    ofstream outStream; //output stream object
    
    inStream.open("data2.txt"); //connect stream to file
    if (inStream.fail()) //check for failure to open
    {
        cout << "File failed to open" << endl;
        return 0;
    }
    outStream.open("data3.txt"); //connect stream to file
    if (outStream.fail()) //check for failure to open
    {
        cout << "File failed to open" << endl;
        return 0;
    }

    string line;
    getline(inStream,line);
    while(!inStream.eof()){
        outStream << line << endl;
        getline(inStream,line);
    }

    inStream.close();
    outStream.close();
    
    return 0;
}/// main