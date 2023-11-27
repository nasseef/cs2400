/**
 *   @file: struct.cc
 * @author: Nasseef Abukamail
 *   @date: November 13, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

class Student{
public:
//Constructors
Student();
Student(int newId, string newName);
Student(int newId, string newName, double newScore);

//setters (Mutators)
void setId(int newId);
void setName(string newName);
void setScore(double newScore);

//getters (Accessors)
int getId();
string getName();
double getScore();

//Helper functions
void output();
private:
    int id;
    string name;
    double score;
};
///Constants and function prototypes


int main(int argc, char const *argv[]) {

    Student s;  //calls the default constructor
    Student s2(33, "Sue");
    s2.output();

    s.setId(33);  //1 or more default 0
    s.setName("Bob"); //cannot be empty default "N/A"
    // s.score = -60; //0 or more default -1
    s.output();
    
    return 0;
} /// main

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


