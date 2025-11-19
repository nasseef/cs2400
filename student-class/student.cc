#include <cstdlib>
#include <fstream>
#include <iostream>
#include "student.h"


using namespace std;
Student::Student() {
    id = 0;
    name = "N/A";
    score = -1;
}

Student::Student(int newId, string newName) {
    name = newName;
    id = newId;
    score = -1;
    if (newId < 0) {
        id = 0;
    }
    // id = newId < 0 ? 0 : newId;
    if (newName == "") {
        name = "N/A";
    }
}
void Student::output(ostream &out) {
    out << " Name: " << name << endl;
    out << "   ID: " << id << endl;
    out << "Score: " << score << endl;
}

string Student::getName() const{ return name; }
int Student::getId() { return id; }
double Student::getScore() { return score; }

void Student::setName(string newName) {
    if (newName != "") {
        name = newName;
    }
}
void Student::setId(int newId) {
    if (newId >= 0) {
        id = newId;
    }
}
void Student::setScore(double newScore) {
    if (newScore >= -1) {
        score = newScore;
    }
}