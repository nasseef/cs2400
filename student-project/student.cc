
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "student.h"
//
using namespace std;
Student::Student(){
    name = "N/A";
    id = 0;
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
void Student::setId(int newId){
    if (newId >= 0)
    {
        //default value
        id = newId;
    }

}
int Student::getId(){
    return id;
}

void Student::setScore(double newScore){
    if (newScore >= 0 && newScore <= 100)
    {
        score = newScore;
    }
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

string Student::getName(){
    return name;
}

void Student::output(){
    cout << "Name:  " << name << " ";
    cout << "ID:    " << id << " ";
    cout << "Score: " << score << endl;
}

