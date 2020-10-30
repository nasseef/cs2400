/**
 *   @file: structures.cc
 * @author: Nasseef Abukamail
 *   @date: October 30, 2020
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

struct Student {
    string name;
    int id;
    double score;
};  //; is required

/// function prototypes
void printStudent(const Student &s);
int main(int argc, char const *argv[]) {
    Student s = {"Mary", 345, 90.0};

    s.name = "Bob";
    s.id = 123;
    s.score = 87;

    printStudent(s);
    return 0;
}  /// main

void printStudent(const Student &s) {
    cout << "Name: " << s.name << endl;
    cout << "ID: " << s.id << endl;
    cout << "Score: " << s.score << endl;
}