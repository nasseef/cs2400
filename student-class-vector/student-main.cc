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
    
    s.output(cout);

    Student s2("Mary", 345);
    s2.setId(-99);
    s2.addScore(90);
    s2.addScore(75);
    s2.addScore(86);
    s2.output(cout);
    cout << endl;
    s2.setScoreAt(-2, 100);
    cout << "Score at position 2 is " << s2.getScoreAt(2) << endl;
    return 0;
} /// main
