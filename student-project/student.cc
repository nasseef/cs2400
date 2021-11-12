#include <iostream>
#include "student.h"
using namespace std;

//Constructors
Student::Student(int newId, string newName){
    //exercise
    id = 0;
    name = "N/A";
    score = -1;
    if (newId >= 0)
    {
        id = newId;
    }
    if (newName != "")
    {
        name = newName;
    }
    
    
}


Student::Student(){
    id = 0;
    name = "N/A";
    score = -1;
}
int Student::getId() const{
    return id;
}

string Student::getName() const{
    return name;
}

double Student::getScore() const{
    return score;
}
void Student::setId(int newId){

    if (newId >= 0)
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

void Student::output(){
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Score: " << score << endl;
}