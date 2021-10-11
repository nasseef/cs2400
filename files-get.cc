/**
 *   @file: files.cc
 * @author: Nasseef Abukamail
 *   @date: October 11, 2021
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
//1 
#include <fstream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    //2. create the stream objects
    ifstream inStream;
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;
    //3. open the stream
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
    
    //4. opening of the stream is successful, use it
    string word;
    char ch;
    inStream.get(ch);
    while (!inStream.eof())
    {
       outStream << ch;
       inStream.get(ch);
    }
    
    cout << endl;
    //5. close the streams
    inStream.close();
    outStream.close();
    return 0;
}  /// main