/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 20, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "student.h"
#include "student.h"

using namespace std;

int main(int argc, char const *argv[]) {
    Student s1; //automatically calls the default constructor
    s1.setId(5);
    //cout << s1.getId() << endl;
    s1.setId(123);
    s1.setName("Sandy");
    s1.setScore(85.5);
    s1.output();
    cout << "------------------" << endl;
    Student s2(100); //call the second constructor
    s2.setName("John");
    s2.setScore(88.5);
    s2.output();

    return 0;
} /// main

