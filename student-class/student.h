#ifndef STUDENT_H
#define STUDENT_H
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;
class Student {
   public:
    Student();  // Default contstuctor
    Student(int newId, string newName);
    string getName() const;
    int getId();
    double getScore();
    /**
     *
     */
    void setName(string newName);
    void setId(int newId);
    void setScore(double newScore);

    void output(ostream &out);

   private:
    string name;
    int id;
    double score;
};
#endif