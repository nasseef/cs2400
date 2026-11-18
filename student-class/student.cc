#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "student.h"

using namespace std;


Student::Student(){
    id = 0;
    name = "N/A";
    score = -1;
}
Student::Student(int newId, string newName){
    id = newId;
    if (id < 0)
    {
        id = 0;
    }
    name = newName;
    if (name == "")
    {
        name = "N/A";
    }
    score = -1;
    
    
}
void Student::setId(int newId) {
    if (newId > -1)
    {
        id = newId;
    }
}
int Student::getId() { return id; }


void Student::setName(string newName) {
    if (newName != "")
    {
        name = newName;
    }

}
void Student::setScore(double newScore) {
    if (newScore > -1)
    {
        score = newScore;
    }
}

string Student::getName() { return name; }

double Student::getScore() { return score; }



void Student::output(){
    cout << "   ID: " << id << endl;
    cout << " Name: " << name << endl;
    cout << "Score: " << score << endl;
}

