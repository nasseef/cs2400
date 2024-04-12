/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 08, 2024
 *  @brief: Add Description
 * 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "student.h"
#include "student.h"
using namespace std;


int main(int argc, char const *argv[]) {
    Student s;
    s.display();
    s.setScore(100);
    s.setId(9);
    s.setName("Linda");
    s.setScore(-100);
    s.display();

    Student s2(99, "John");
    s2.display();
    return 0;
    s.setId(1000);
    s.setScore(55);
    s.setName("");
    //s.display();
    double myScore = s.getScore();

    cout << "score is " << s.getScore() << endl;
    return 0;
} /// main

