#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student
{
 public:
    //constructors
    Student();
    Student(int newId, string newName);

    //setters or mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //getters or accessors
    int getId();
    string getName();
    double getScore();

    //helper functions
    void output();
 private:
    string name;
    int id;
    double score;
};
#endif