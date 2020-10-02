/**
 *   @file: input-stream.cc
 * @author: Nasseef Abukamail
 *   @date: October 02, 2020
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
    string line;

    getline(inStream, line);
    cout << "Line: " << line << endl;
    getline(inStream, line);
    cout << "Line: " << line << endl;
    getline(inStream, line);
    cout << "Line: " << line << endl;

    // int number;

    // char ch;

    // inStream.get(ch);
    // cout << "The character is " << ch << endl;
    // inStream.get(ch);
    // cout << "The character is " << ch << endl;
    // inStream.get(ch);
    // cout << "The character is " << ch << endl;

    // inStream >> number;
    // cout << "The number is " << number << endl;
    // inStream >> number;
    // cout << "The number is " << number << endl;
    // inStream >> number;
    // cout << "The number is " << number << endl;
    // inStream >> number;
    // cout << "The number is " << number << endl;
    inStream.close();
    return 0;
} /// main