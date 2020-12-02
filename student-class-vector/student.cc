/**
 *   @file: student.cc
 * @author: Nasseef Abukamail
 *   @date: November 13, 2020
 *  @brief: Implementation of the student class
 */

#include "student.h"

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/// function prototypes

Student::Student() {
    id = 0;
    name = "N/A";
}
Student::Student(string newName, int newId) {
    if (newId >= 0)  // 0 is my default
    {
        id = newId;
    } else {
        id = 0;  // default based on business rules
    }
    if (newName != "")  // business rule
    {
        name = newName;
    } else {
        name = "N/A";  // default
    }
}

// Student::Student(string newName, int newId, double newScore){
//     if (newId >= 0) //0 is my default
//     {
//         id = newId;
//     }
//     else {
//         id = 0; //default based on business rules
//     }
//     if (newName != "") //business rule
//     {
//         name = newName;
//     }
//     else {
//         name = "N/A"; //default
//     }

// }

void Student::setId(int newId) {  // member function of the class Student
    if (newId >= 0)               // 0 is my default
    {
        id = newId;
    }
}

void Student::addScore(double newScore) {
    if (newScore >= 0) {
        scores.push_back(newScore);
    }
}

int Student::getId() { return id; }

void Student::setName(string newName) {
    if (newName != "")  // business rule
    {
        name = newName;
    }
}

void Student::setScoreAt(int index, double newScore) {
    if (newScore < 0)
    {
        return;
    }
    if (index >= 0 && index < scores.size()) {
        scores.at(index) = newScore;
    }
}
string Student::getName() { return name; }

double Student::getScoreAt(int index) {
    if (index >= 0 && index < scores.size()) {
        return scores.at(index);
    }
    return -1;
}

void Student::output(ostream &out) {
    out << " Name: " << name << endl;
    out << "   ID: " << id << endl;
    out << "Scores: " << endl;
    for (size_t i = 0; i < scores.size(); i++) {
        out << scores.at(i) << " ";
    }
}