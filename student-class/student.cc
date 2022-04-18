#include <iostream>
#include <iomanip>
#include <fstream>
#include "student.h"
//changed again
using namespace std;
Student::Student(){
    id = 0;
    name = "NA";
    score = -1;
}
Student::Student(int newId, string newName){
    id = 0;
    if (newId > 0)
    {
        id = newId;
    }
    
    name = "NA";
    if (newName != "")
    {
        name = newName;
    }
    score = -1;
}
void Student::setId(int newId){

    if (newId > 0)
    {
        id = newId;
    }
}
void Student::setName(string newName){
    if (newName != "")
    {
        name = newName;
    }
    
}
void Student::setScore(double newScore){

    if (newScore >= 0 && newScore <= 100)
    {
        score = newScore;
    }
    
}
int Student::getId(){
    return id;
}

string Student::getName(){
    return name;
}

double Student::getScore(){
    return score;
}

void Student::output(ostream &out){
    out << "Student Id: " << id << endl;
    out << "Student Name: " << name << endl;
    out << "Student Score: " << score << endl;
    
}
