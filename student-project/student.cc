
#include <iostream>
#include "student.h"

using namespace std;
//default constructor
Student::Student(){
    id = 0;
    name = "NA";
    score = -1;
}

Student::Student(int newId, string newName){
    if (newId >= 0)
    {
        id = newId;
    }
    else {
        id = 0;
    }
    if (newName != "")
    {
        name = newName;
    }
    else {
        name = "NA";
    }
    
    score = -1;
}
Student::Student(int newId, string newName, double newScore){
    if (newId >= 0)
    {
        id = newId;
    }
    else {
        id = 0;
    }
    if (newName != "")
    {
        name = newName;
    }
    else {
        name = "NA";
    }
    if (newScore >= -1)
    {
        score = newScore;
    }
    else {
        score = -1;
    }
}
void Student::setId(int newId) {
    if (newId >= 0)
    {
        id = newId; 
    }
}
void Student::setName(string newName) {
    if (newName != "") {
        name = newName;
    }
}

void Student::setScore(double newScore) {
    if (newScore >= -1) {
        score = newScore;
    }
}

int Student::getId() { 
    return id; 
}

string Student::getName() { 
    return name; 
}

double Student::getScore() { 
    return score; 
}
void Student::output(){
    cout << "ID: " << id << endl;
    cout << "Name: " << getName() << endl;
    cout << "Score: " << getScore() << endl;
}


