/**
 *   @file: input-stream.cc
 * @author: Nasseef Abukamail
 *   @date: May 31, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream> //1
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    //2 declare an input stream object
    ifstream inStream;

    //3 Open the file
    inStream.open("scores.txt");
    //check if opened successfully
    if (inStream.fail())
    {
        cout << "Error opening the file" << endl;
        exit(0);
    }
    
    //4 Process the file
    int num;
    int total = 0;
    
    while(inStream >> num){
        total += num;
    }
    cout << "Total is " << total << endl;

    //5 close the file
    inStream.close();
    return 0;
}/// main