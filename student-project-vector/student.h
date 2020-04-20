#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Student {
public:
    //Constructors: used to initialize member variables
    Student(); //default constructor
    Student(int newId, string newName);
    
    //setters or mutators
    void setId(int newId);
    void setName(string newName);
    void setScoreAt(int scoreNumber, double newScore);
    
    //getters or accessors
    int getId();
    string getName();
    double getScoreAt(int scoreNumber);
    
    //helper functions
    void addScore(double newScore);
    friend ostream& operator << (ostream &out, const Student &s);
    double getAverage();
    char getGrade();
private:
    string name;
    int id;
    vector <double> scores;
};  //semicolon is required
#endif
