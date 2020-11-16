/**
 *   @file: student.cc
 * @author: Nasseef Abukamail
 *   @date: November 13, 2020
 *  @brief: Implementation of the student class
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include "student.h"

using namespace std;

///function prototypes

Student::Student(){
    id = 0;
    name = "N/A";
    score = -1;
}

Student::Student(string newName, int newId, double newScore){
    if (newId >= 0) //0 is my default
    {
        id = newId;
    }
    else {
        id = 0; //default based on business rules
    }
    if (newName != "") //business rule
    {
        name = newName; 
    }
    else {
        name = "N/A"; //default
    }
    if (newScore >= 0)
    {
        score = newScore;
    }
    else {
        score = -1;
    }
    

}

void Student::setId(int newId){ //member function of the class Student
    if (newId >= 0) //0 is my default
    {
        id = newId;
    }

}

int Student::getId(){
    return id;
}

void Student::setName(string newName){
    if (newName != "") //business rule
    {
        name = newName; 
    }
}

string Student::getName(){
    return name;
}

void Student::output(ostream &out){
    out << " Name: " << name << endl;
    out << "   ID: " << id << endl;
    out << "Score: " << score << endl;
}