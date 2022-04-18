/**
 *   @file: structure.cc
 * @author: Nasseef Abukamail
 *   @date: March 30, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>
#include "student.h"
#include "student.h"
//changed somethin
using namespace std;

int main(int argc, char const *argv[]) {
    
    Student s;

    s.output(cout);

    s.setId(9000);
    s.setId(-9000);
    s.setName("Bob");
    s.setName("");

    s.setScore(100);
    s.output(cout);

    Student s2(100, "Jim");
    s2.output(cout);
    //s.output();
    
    return 0;
} /// main




