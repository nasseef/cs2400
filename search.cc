/**
 *   @file: search.cc
 * @author: Nasseef Abukamail
 *   @date: March 16, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int search(const string names[], string target, int count);
int main(int argc, char const *argv[]) {

    string names[] = {"Ed", "Jim", "Bob", "Fred", "Sue", "Jen", "John"};
    int count = 7;
    string target;
    cout << "What name are you searching? ";
    getline(cin, target);

    int location = search(names, target, count);

    if (location == -1)
    {
        cout << target << " not found" << endl;
    }
    else {
        cout << target << " is located at position " << location << endl;
        
    }
    return 0;
} /// main

//sequential/linear search
int search(const string names[], string target, int count){
    for (size_t i = 0; i < count; i++)
    {
        if (target == names[i])
        {
            return i; //target is found
        }
    }
    return -1; //target not found
}