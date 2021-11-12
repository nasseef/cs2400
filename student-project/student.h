#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student{ //capitalized
public:
    //Constructors
    Student(); //default constructor called automatically
    Student(int newId, string newName);
    Student(int newId, string newName, double newScore); //exercise
    //Mutators or setters
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);
    

    //accessors or getters
    int getId() const; // get_id
    string getName() const;
    double getScore() const;

    //helper function
    void output();


//member variables
private:
    int id;
    string name;
    double score;
}; //semicolon is required

#endif