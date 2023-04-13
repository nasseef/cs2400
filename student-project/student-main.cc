/**
 *   @file: student-struct.cc
 * @author: Nasseef Abukamail
 *   @date: April 03, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "student.h"
#include "student.h"
//
using namespace std;

int main(int argc, char const *argv[]) {

    Student s;
    s.output();

    Student s2(100, "Sue");
    s2.output();
    
    s2.setId(-100);
    s2.output();
    s2.setScore(90);
    s2.setScore(-9);
    s2.output();
    
    s.setName("");
    cout << "Name: " << s.getName() << endl;
    cout << "Score: " << s.getScore() << endl;
    cout << "ID: " << s.getId() << endl;

    s.output();
    return 0;
} /// main


