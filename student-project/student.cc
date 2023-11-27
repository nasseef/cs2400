
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "student.h"

void Student::output(){
    cout << "ID:    " << id << endl;
    cout << "Name:  " << name << endl;
    cout << "Score: " << score << endl;
}

Student::Student(){
    id = 0;
    name = "N/A";
    score = -1;
}

Student::Student(int newId, string newName){
    if (newId < 0 || newName == "")
    {
        id = 0;
        name = "N/A";
    }
    else 
    {
        id = newId;
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
    if (newScore >= 0)
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
//double getScore();


