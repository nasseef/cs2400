/**
 *   @file: files.cc
 * @author: Nasseef Abukamail
 *   @date: February 26, 2020
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
    int total = 0;
    int num;
    char ch;
    inStream.open("data.txt");
    if (inStream.fail())
    {
        cout << "Error file not accessible" << endl;
        exit(0);
    }
    //use the file

    // inStream >> num;
    // while (!inStream.eof())
    // {
    //     total += num;
    //     inStream >> num;
    // }
    
    while (inStream >> num)
    {
        total += num;
    }
    
    cout << "Total: " << total << endl;
    //close it
    inStream.close();
    return 0;
}/// main