/**
 *   @file: student-main.cc
 * @author: Nasseef Abukamail
 *   @date: April 09, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "student.h"

#include "student.h"
using namespace std;


///Constants and function prototypes

int main(int argc, char const *argv[]) {
    Student s1;

    s1.output();

    Student s2(123, "John");
    s2.setScore(50);

    s2.setScore(-55);
    s2.output();
    // s1.setId(-12);
    // s1.setName("");
    // s1.setScore(-55);
    // s1.output();

    
    return 0;
} /// main
