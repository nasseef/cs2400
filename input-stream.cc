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
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    inStream.open(filename);
    if (inStream.fail())
    {
        cout << "Error: file failed to open" << endl;
        exit(0);
    }
    
    // int number;
    // int count = 0;
    // int total = 0;
    // while (inStream >> number)  
    // {
    //     count++;
    //     total += number;
    // }
    // cout << "count: " << count << endl;
    // cout << "total: " << total << endl;

    char ch;
    while(inStream.get(ch)){
        cout << ch;
    }

    // string line;
    // while(getline(inStream, line)){
    //     cout << line << endl;
    // }

    // getline(inStream, line);
    // while (!inStream.eof())
    // {
    //     cout << line << endl;
    //     getline(inStream, line);
    // }
    
    // inStream >> number;
    // while (!inStream.eof())
    // {
    //     count++;
    //     total += number;
    //     inStream >> number;
    // }
    
    // cout << "count: " << count << endl;
    // cout << "total: " << total << endl;
    // getline(inStream, line);
    // cout << "Line: " << line << endl;
    // getline(inStream, line);
    // cout << "Line: " << line << endl;
    // getline(inStream, line);
    // cout << "Line: " << line << endl;

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