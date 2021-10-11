/**
 *   @file: files.cc
 * @author: Nasseef Abukamail
 *   @date: October 11, 2021
 *  @brief: Add Description
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    ifstream inStream;
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;
    inStream.open(filename);
    if (inStream.fail())
    {
        cout << "Error: file not found" << endl;
        exit(0);
    }
    
    ofstream outStream;
    outStream.open("output.txt");
    if (outStream.fail())
    {
        cout << "Error: failed to creat file" << endl;
        exit(0);
    }
    
    //opening of the stream is successful
    string line;
    getline(inStream, line);
    while (!inStream.eof())
    {
        outStream << line << endl;
        getline(inStream, line);
    }
    
    cout << endl;
    inStream.close();
    outStream.close();
    return 0;
}  /// main