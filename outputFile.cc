/**
 *   @file: outputFile.cc
 * @author: Nasseef Abukamail
 *   @date: February 26, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
//1. include files library
#include <fstream>

using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    string filename;
    //2. declare a stream object
    ofstream outStream;

    cout << "What is the file name? ";
    cin >> filename;
    //3.Open the stream and check for failure
    outStream.open(filename, ios::app);
    if(outStream.fail()){
        cout << "Error: failed to open the file" << endl;
        return 0;
    }
    

    //4.Use it just like cout
    outStream << "Hello" << endl;
    cout << "Hello" << endl;
    outStream << "World" << endl;
    outStream << fixed << setprecision(2);
    outStream << "Square root: " << sqrt(9) << endl;

    //5. close the stream
    outStream.close();
    /*add code*/
    return 0;
} /// main