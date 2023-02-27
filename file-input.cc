/**
 *   @file: file-input.cc
 * @author: Nasseef Abukamail
 *   @date: February 27, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>  // 1
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    //2 declare input stream object
    ifstream inStream;
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;
    //3 connect stream to a text file
    inStream.open(filename);
    //check if the file opens successfully
    if (inStream.fail())
    {
        cout << "Error: file not found" << endl;
        exit(0);
    }

    //4 use inStream just like cin
    double score;
    // inStream >> score;
    // while (!inStream.eof())
    // {
    //     cout << "Score = " << score << endl;
    //     inStream >> score;
    // }
    
    while (inStream >> score)
    {
        cout << "Score = " << score << endl;
    }
    

    //5 closing the file
    inStream.close();

    
    return 0;
} /// main