/**
 *   @file: input-file-stream.cc
 * @author: Nasseef Abukamail
 *   @date: October 09, 2023
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
        cout << "Error: file does not exist" << endl;
        exit(0);
    }
    int num;
    inStream >> num;
    cout << "Number is " << num << endl;
    inStream.close();
    return 0;
} /// main