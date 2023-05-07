
#include <iostream>
#include <fstream>

#include "student.h"

using namespace std;
Student::Student() {
    id = 0;
    name = "NA";
    score = -1;
}


Student::Student(int newId, string newName){
    if (newId >= 0){
        id = newId;
    }
    else {
        id = 0;
    }
    if (newName.length() > 0){
        name = newName;
    }
    else {
        name = "NA";
    }
    score = -1;
}


void Student::setId(int newId){
    if (newId >= 0)
    {
        id = newId;
    }
}

int Student::getId(){
    return id;
}

void Student::setName(string newName){
    if (newName.length() > 0)
    {
       name = newName;
    }
}


string Student::getName(){
    return name;
}


void Student::setScore(double newScore){
    if (newScore >= 0)
    {
        score = newScore;
    }
}

double Student::getScore(){
    return score;
}

void Student::output(ostream &outs){
    outs << " Name: " << name << endl;
    outs << "   ID: " << id << endl;
    outs << "Score: " << score << endl;
}

