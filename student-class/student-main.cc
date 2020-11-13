/**
 *   @file: student-main.cc
 * @author: Nasseef Abukamail
 *   @date: November 13, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "student.h"
#include "student.h"

using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    Student s; //call the default constructor
    //use s
    s.output();
    
    Student s2("Mary", 345, -99);
    s2.setId(-99);
    s2.output();
    
    return 0;
} /// main
