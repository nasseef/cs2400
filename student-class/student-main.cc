/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: November 10, 2025
 *  @brief: Add Description
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include "student.h"

using namespace std;


int main(int argc, char const* argv[]) {
    Student s;  // default contstructor is called
    s.output(cout);

    s.setName("");
    s.setId(-562);
    s.setScore(55);
    cout << "The first student" << endl;
    s.output(cout);

    Student s2(500, "N/A");
    s2.setId(-300);
    s2.output(cout);
    return 0;
}  /// main

