/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: November 06, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class Student{
public:
    //constructors
    Student(); //default constructor
    Student(string newName, int newId, double newScore);
    Student(string newName, int newId);
    


    //setters/mutators
    void setId(int newId); 
    void setName(string newName);
    void setScore(double newScore);

    //getter/accessors
    int getId();
    string getName();
    double getScore();

    //helper functions
    void output();
    void input();
    char getGrade();
private:
    string name;
    int id;
    double score;

};
///function prototypes

int main(int argc, char const *argv[]) {

    Student s; //call the default constructor
    //use s
    s.output();
    
    Student s2("Mary", 345, -99);
    s2.setId(-99);
    s2.output();
    
    return 0;
} /// main

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

void Student::output(){
    cout << " Name: " << name << endl;
    cout << "   ID: " << id << endl;
    cout << "Score: " << score << endl;
}