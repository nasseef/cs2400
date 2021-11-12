/**
 *   @file: structures.cc
 * @author: Nasseef Abukamail
 *   @date: November 01, 2021
 *  @brief: Student class
 *  
 */

#include <iostream>
#include <iomanip>
#include "student.h"
#include "student.h"
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    Student s;

    s.output();

    s.setId(10);
    s.setName("");
    s.setScore(99);
    cout << "**************" << endl;
    s.output();

    Student s2(-20, "Jim");
    s2.output();
    return 0;
} /// main
