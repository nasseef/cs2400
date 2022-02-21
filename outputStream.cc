/**
 *   @file: outputStream.cc
 * @author: Nasseef Abukamail
 *   @date: February 21, 2022
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

    //2 create the stream object
    ofstream outStream;
    string fileName = "output.txt";//physical file name

    //3 connect outStream to the external text file
    outStream.open(fileName);
    if (outStream.fail())  //fail is a member function of outStream
    {
        cout << "Error: faile to open " << fileName << endl;
        exit(0);
    }
    
    //4 use outStream just like cout
    int number = 6;
    outStream << setfill('-');
    outStream << setw(5) << (number * number) << endl;

    //5 close the file
    outStream.close(); //close member function
    return 0;
} /// main