/**
 *   @file: student-main.cc
 * @author: Nasseef Abukamail
 *   @date: April 12, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>
#include "student.h"

using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
    Student s;
    s.output(cout);
    s.setId(-123);
    s.setName("");
    s.setScore(89.0);
    s.output(cout);

    Student s2(999, "Jim");
    s2.output(cout);
    s2.setName("");
    cout << "**********" << endl;
    s2.output(cout);
    return 0;
}/// main






