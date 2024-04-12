/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 08, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "student.h"
using namespace std;


void Student::setId(int newId){
   
    if (newId >= 0)
    {
        id = newId;
    }
    
}
void Student::display(){
    cout << " Student name: " << name << endl;
    cout << "   Student ID: " << id << endl;
    cout << "Student Score: " << score << endl;
}

void Student::setScore(double newScore){
    
    if (newScore >= 0)
    {
        score = newScore;
    }
    
}
void Student::setName(string newName){
    
    if (newName != "")
    {
        name = newName;
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
Student::Student(){
    id = 0;
    name = "N/A";
    score = -1;
}
Student::Student(int newId, string newName){
    id = 0;
    name = "NA";
    score = -1;
    if (newId >= 0 && newName != ""){
        id = newId;
        name = newName;
    }
    
    
}

