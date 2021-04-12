
#include <iostream>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H   //similar declaring a variable

class Student {
   public:
    //Constructors (have no return type)
    Student();  //default constructor with no parameters
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

    //helper functions
    void output();
    char getGrade();
    void input();

   private:
    int id;
    string name;
    double score;
};

#endif
