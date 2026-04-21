/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 6, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// Student docs
class Student{
public:
    //default constructor (initialize to default values)
    Student();
    Student(int newId);
    Student(int newId, string newName);
    Student(int newId, string newName, double newScore);

    //setters/mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //getters/accessors
    int getId();
    string getName();
    double getScore();

    //helper functions
    void output();

private:
    int id;
    string name;
    double score; //comments
}; // ';' is required

///Constants and function prototypes
void printStudent(const Student &s);

int main(int argc, char const *argv[]) {
    Student s1; //automatically calls the default constructor
    s1.setId(5);
    //cout << s1.getId() << endl;
    s1.setId(123);
    s1.setName("Sandy");
    s1.setScore(95.5);
    s1.output();
    cout << "------------------" << endl;
    Student s2(100); //call the second constructor
    s2.setName("John");
    s2.setScore(88.5);
    s2.output();

    return 0;
} /// main

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


