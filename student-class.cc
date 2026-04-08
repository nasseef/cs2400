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
    s1.setId(-100);
    s1.output();
    
    Student s2(100); //call the second constructor
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


void Student::output(){
    cout << " Name: " << name << endl;
    cout << "   ID: " << id << endl;
    cout << "Score: " << score << endl;
}


