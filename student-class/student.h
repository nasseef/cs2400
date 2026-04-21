/**
 * @author Nasseef Abukamail
 */
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// Student docs
class Student{
public:
    //default constructor (initialize to default values)
    Student();
    Student(int newId);
    Student(int newId, string newName);
    Student(int newId, string newName, double newScore);

    //setters/mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //getters/accessors
    int getId();
    string getName();
    double getScore();

    //helper functions
    void output();

private:
    int id;
    string name;
    double score; //comments
}; // ';' is required

#endif