/**
 *   @file: struct.cc
 * @author: Nasseef Abukamail
 *   @date: November 13, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include "student.h"
#include "student.h"

using namespace std;
///Constants and function prototypes

int main(int argc, char const *argv[]) {

    Student s;  //calls the default constructor
    Student s2(33, "Sue");
    s2.output();

    s.setId(33);  //1 or more default 0
    s.setName("Bob"); //cannot be empty default "N/A"
    // s.score = -60; //0 or more default -1
    s.output();
    
    return 0;
} /// main

