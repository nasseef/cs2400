/**
 *   @file: vector.cc
 * @author: Nasseef Abukamail
 *   @date: October 29, 2019
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    vector <string> names;
    cout << "Vector size: " << names.size() << endl;

    names.push_back("Bob");
    names.push_back("Jim");
    names.push_back("Mary");
    cout << "Vector size: " << names.size() << endl;
    names.insert(names.begin(), "NA");
    for (size_t i = 0; i < names.size(); i++)
    {
        cout << "Name: " << names[i] << endl;
    }

    cout << "Vector size: " << names.size() << endl;
    
    cout << "Capacity: " << names.capacity() << endl;
    names.erase(names.begin() + 1, names.begin()+3);
    cout << "Vector size: " << names.size() << endl;
    for (size_t i = 0; i < names.size(); i++)
    {
        cout << "Name: " << names[i] << endl;
    }
    return 0;
}/// main