/**
 *   @file: student-struct.cc
 * @author: Nasseef Abukamail
 *   @date: November 09, 2026
 *  @brief: Add Description
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include "student.h"
#include "student.h"

using namespace std;

/// Constants and function prototypes



int main(int argc, char const* argv[]) {
    Student s1;
    s1.output();
    s1.setId(123);
    s1.setName("Sue");

    s1.setScore(23);
    s1.output();

    Student s2(345, "John");
    s2.setId(-123);
    s2.output();

    
    return 0;
}  /// main

