#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "student.h"
using namespace std;

Student::Student(){
    id = 0;
    name = "N/A";
    score = -1;
}

Student::Student(int newId){
    id = 0;
    if (newId > 0)
    {
        id = newId;
    }
    name = "N/A";
    score = -1;
    
}
int Student::getId(){
    return id;
}
void Student::setId(int newId){
    if (newId >= 0)
    {
        id = newId;
    }
    
}

string Student::getName(){
    return name;
}
double Student::getScore(){
    return score;
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

void Student::output(){
    cout << " Name: " << name << endl;
    cout << "   ID: " << id << endl;
    cout << "Score: " << score << endl;
}


