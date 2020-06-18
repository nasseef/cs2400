/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 06, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>
using namespace std;

class Student{
public:
    //constructors
    Student(); //default constructor
    Student(int newId, string newName);

    //getters/accessors
    int getId();
    string getName();
    double getScore();

    //setters/mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //helper function
    void output(ostream &outs);
private:
    string name;
    int id;
    double score;
};

///function prototypes

int main(int argc, char const *argv[]) {
    Student s;
    s.output(cout);
    s.setId(-123);
    s.setName("");
    s.setScore(89.0);
    s.output(cout);

    Student s2(999, "Jim");
    s2.output(cout);
    s2.setName("");
    cout << "**********" << endl;
    s2.output(cout);
    return 0;
}/// main


Student::Student() {
    id = 0;
    name = "NA";
    score = -1;
}


Student::Student(int newId, string newName){
    if (newId >= 0){
        id = newId;
    }
    else {
        id = 0;
    }
    if (newName.length() > 0){
        name = newName;
    }
    else {
        name = "NA";
    }
    score = -1;
}


void Student::setId(int newId){
    if (newId >= 0)
    {
        id = newId;
    }
}

int Student::getId(){
    return id;
}

void Student::setName(string newName){
    if (newName.length() > 0)
    {
       name = newName;
    }
}


string Student::getName(){
    return name;
}


void Student::setScore(double newScore){
    if (newScore >= 0)
    {
        score = newScore;
    }
}

double Student::getScore(){
    return score;
}

void Student::output(ostream &outs){
    outs << " Name: " << name << endl;
    outs << "   ID: " << id << endl;
    outs << "Score: " << score << endl;
}

