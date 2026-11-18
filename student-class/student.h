
#ifndef STUDENT_H
#define STUDENT_H
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

class Student {
   public:
   //Constructors
   Student();
   Student(int newId, string newName);

    // setters or mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);
    // getters or accessors
    int getId();
    string getName();
    double getScore();

    void output();

   private:
    // member variables
    int id;
    string name;
    double score;  // comments
};  // ';' is required
#endif