/**
 *   @file: student-main.cc
 * @author: Nasseef Abukamail
 *   @date: April 12, 2021
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

    Student s;  // Object of type Student

    s.output();
    s.setId(123);  // set the value of id to 123
    s.setName("Bob");
    s.setScore(98);

    cout << "**************" << endl;
    s.output(); //sending a message to s to print itself
    
    Student s2(-678, "Jim");
    cout << "**************" << endl;
    s2.output();

    Student s3(999, "Sue", 95);
    cout << "**************" << endl;
    s3.output();

    return 0;
} /// main