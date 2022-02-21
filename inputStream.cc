/**
 *   @file: inputStream.cc
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

    //2
    ifstream inStream;

    string fileName = "inputrrrrrrr.txt";
    //3
    inStream.open(fileName);
    if (inStream.fail())
    {
        cout << "Error: file not found " << fileName << endl;
        exit(0);
    }
    //4 use inStream just like cin
    int number;
    inStream >> number;
    cout << "The number read is " << number << endl;
    inStream >> number;
    cout << "The number read is " << number << endl;

    string name;
    inStream >> name;
    cout << "Name is " << name << endl;

    //5
    inStream.close();
    return 0;
} /// main