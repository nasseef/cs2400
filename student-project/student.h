#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
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
    /**
     * setId - sets the student's. If the id is invalid it will 
     *         not be changed
     * @param newId - A valid new id for the student
     */
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
#endif