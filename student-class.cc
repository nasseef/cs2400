/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: November 10, 2025
 *  @brief: Add Description
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

class Student {
   public:
    Student();  // Default contstuctor
    Student(int newId, string newName);
    string getName();
    int getId();
    double getScore();

    /**
     *
     */
    void setName(string newName);
    void setId(int newId);
    void setScore(double newScore);

    void output();

   private:
    string name;
    int id;
    double score;
};
/// Constants and function prototypes
void printStudent(const Student& theStudent);

int main(int argc, char const* argv[]) {
    Student s;  // default contstructor is called
    s.output();

    s.setName("");
    s.setId(-562);
    s.setScore(55);
    cout << "The first student" << endl;
    s.output();

    Student s2(500, "N/A");
    s2.setId(-300);
    s2.output();
    return 0;
}  /// main

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
void Student::output() {
    cout << " Name: " << name << endl;
    cout << "   ID: " << id << endl;
    cout << "Score: " << score << endl;
}

string Student::getName() { return name; }
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
