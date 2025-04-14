#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class Student{
public:
    //Constructors
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

    //helper functions
    void output();
private:
    int id;
    string name;
    double score;
};
#endif