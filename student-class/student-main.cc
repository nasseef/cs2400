/**
 *   @file: student-main.cc
 * @author: Nasseef Abukamail
 *   @date: November 13, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include "student.h"


using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    Student s; //call the default constructor
    //use s
    ofstream outs;
    outs.open("output.txt");
    if (outs.fail())
    {
        cout << "Error opening the file" << endl;
        exit(0);
    }
    
    s.output(outs);
    
    Student s2("Mary", 345, -99);
    s2.setId(-99);
    s2.output(cout);
    
    return 0;
} /// main
