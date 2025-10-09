/**
 *   @file: files.cc
 * @author: Nasseef Abukamail
 *   @date: October 08, 2025
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
/// 1
#include <fstream>

using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    /// 2
    ifstream inStream;
    /// 3
    inStream.open("numbers.txt");
    if (inStream.fail()) {
        cout << "Error: file does not exist" << endl;
        exit(0);
    }
    /// 4 use it
    int num;
    inStream >> num;
    while (!inStream.eof()) {
        cout << "Number is " << num << endl;
        inStream >> num;
    }

    /// 5
    inStream.close();
    return 0;
}  /// main