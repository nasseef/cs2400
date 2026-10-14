/**
 *   @file: input-files.cc
 * @author: Nasseef Abukamail
 *   @date: October 12, 2026
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
// 1
#include <fstream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const* argv[]) {
    // 2 create the stream object
    ifstream inStream;

    // 3 open the file
    inStream.open("charData.txt");
    if (inStream.fail()) {
        cout << "Error: file does not exist" << endl;
        exit(0);
    }
    char ch;
    // inStream.get(ch);
    string line;
    getline(inStream, line, '!');
    while (!inStream.eof()) {
        cout << line << endl;
        getline(inStream, line, '!');
    }

    inStream.close();

    return 0;
}  /// main