/**
 *   @file: input-files.cc
 * @author: Nasseef Abukamail
 *   @date: February 28, 2024
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
// 1
#include <fstream>
using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    // 2
    ifstream inStream;
    // 3
    inStream.open("input.txt");
    if (inStream.fail()) {
        cout << "Error: file does not exist" << endl;
        exit(0);
    }
    // 4 use the stream just like cin
    char ch;

    inStream.get(ch);
    while (!inStream.eof())
    {
        cout << ch;
        inStream.get(ch);

    }
    cout << endl;
    // 5
    inStream.close();
    return 0;
}  /// main