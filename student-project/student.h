#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student{
public:
//Constructors
Student();
Student(int newId, string newName);
Student(int newId, string newName, double newScore);

//setters (Mutators)
void setId(int newId);
void setName(string newName);
void setScore(double newScore);

//getters (Accessors)
int getId();
string getName();
double getScore();

//Helper functions
void output();
private:
    int id;
    string name;
    double score;
};
#endif