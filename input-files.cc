/**
 *   @file: input-files.cc
 * @author: Nasseef Abukamail
 *   @date: October 14, 2024
 *  @brief: Add Description
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    ifstream inputStream;

    inputStream.open("numbers.txt");

    int age;
    inputStream >> age;
    while (!inputStream.eof()) {
        cout << age;
        inputStream >> age;
    }

    inputStream.close();

    return 0;
}  /// main