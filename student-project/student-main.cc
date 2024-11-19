/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: November 18, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include "student.h"
using namespace std;


///Constants and function prototypes
//void printStudent(const Student &s);

int main(int argc, char const *argv[]) {

    Student s1;
    s1.output();
    Student s2(999, "Sue");
    s2.output();

    return 0;
} /// main

