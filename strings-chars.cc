/**
 *   @file: first.cc
 * @author: Nasseef Abukamail
 *   @date: August 30, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main() {

    ///start of the program
    //declared a variable of type string and initialized it
    string message = "Welcome to OU";

    cout << "Hello CS2400!!" << endl;
    cout << message << endl;
    cout << "length of message is " << message.length() << endl;
    cout << "The second character is " << message.at(1) << endl;
    char first = message.at(0);
    cout << "First character is " << first << endl;
    return 0;
} /// 
