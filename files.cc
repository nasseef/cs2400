/**
 *   @file: files.cc
 * @author: Nasseef Abukamail
 *   @date: October 07, 2019
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    ifstream inStream;
    inStream.open("data.txt");
    if (inStream.fail())
    {
        cout << "File failed to open" << endl;
        return 0;
    }
    
    int num;
    
    inStream >> num;
    while(!inStream.eof()){
        cout << "Num: " << num << endl;
        inStream >> num;
    }

    inStream.close();
    return 0;
}/// main