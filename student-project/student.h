
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

///Constants and function prototypes
//creates an new type called Student
class Student{
public:
    //Constructors
    Student(); //Default constructor (no parameters)
    Student(int newID, string newName);

    //mutator or a setter
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);
    //accessors or getters
    int getId();
    string getName();
    double getScore();
    void output();
private:
    string name;
    int id;
    double score;
    
}; //; is important
#endif