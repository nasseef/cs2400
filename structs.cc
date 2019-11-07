/**
 *   @file: structs.cc
 * @author: Nasseef Abukamail
 *   @date: November 06, 2019
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

// declare a structure
struct Student {
    int id;
    string name;
    double score;
};

/// function prototypes

void displayStudent(Student s);
int main(int argc, char const *argv[]) {
    Student s;
    s.id = 123;
    s.name = "Bob";
    s.score = 65;

    displayStudent(s);
    Student s2 = {234, "Jim", 75};
    displayStudent(s2);
    return 0;
}  /// main

void displayStudent(Student s) {
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Score: " << s.score << endl;
}

