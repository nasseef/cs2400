/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 05, 2021
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes
class Student {
   public:
    // Constructors (no types, same name ast the class)
    Student();  // Default constructor (no parameters)
    Student(int newId, string newName);
    Student(int newId, string newName, double newScore);
    
    // setter/mutator functions
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    // getter/accessors function
    int getId();
    string getName();
    double getScore();

    // helper functions
    void output();
    char getGrade();

   private:
    int id;
    string name;
    double score;
};

int main(int argc, char const *argv[]) {
    Student s;  // Object of type Student

    s.output();

    cout << "************" << endl;
    s.setId(123);  // set the value of id to 123

    cout << "************" << endl;
    s.output();

    s.setId(-123);
    cout << "************" << endl;
    s.output();

    s.setName("Bob");
    s.setName("");
    cout << "************" << endl;
    s.output();

    s.setScore(99);
    s.setScore(-100);
    cout << "************" << endl;
    s.output();

    Student s2(-789, "");  // call the second constructor
    cout << "************" << endl;
    s2.output();

    Student s3(345, "Sue", 95);
    
    return 0;
}  /// main

Student::Student() {
    id = 0;
    name = "NA";
    score = -1;
}

Student::Student(int newId, string newName) {
    if (newId >= 0) {
        id = newId;
    } else {
        id = 0;
    }

    if (newName != "") {
        name = newName;
    }
    else {
        name = "NA";
    }

    score = -1;
}
void Student::setId(int newId) {
    if (newId >= 0) {
        id = newId;
    }
}

void Student::setName(string newName) {
    if (newName != "") {
        name = newName;
    }
}

void Student::setScore(double newScore) {
    if (newScore >= -1) {
        score = newScore;
    }
}

int Student::getId() { return id; }

string Student::getName() { return name; }

double Student::getScore() { return score; }

void Student::output() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Score: " << score << endl;
}