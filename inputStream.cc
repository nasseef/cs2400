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

    string fileName = "input.txt";
    //3
    inStream.open(fileName);
    if (inStream.fail())
    {
        cout << "Error: file not found " << fileName << endl;
        exit(0);
    }
    
    ofstream outStream;
    outStream.open("output.txt");
    if (outStream.fail())
    {
        cout << "Erro" << endl;
        exit(0);
    }
    
    //4 use inStream just like cin
    //int number;

    // inStream >> number; //I
   
    // while (!inStream.eof()) //C
    // {
    //     cout << number << endl;
    //     inStream >> number; //U

    // }
    // char ch;
    // while (inStream.get(ch))
    // {
    //     outStream << ch;
    // }
    string line;
    while (getline(inStream, line))
    {
        outStream << line << endl;
    }
    
    
    //5
    inStream.close();
    outStream.close();
    return 0;
} /// main