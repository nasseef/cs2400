/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 05, 2021
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes
class Student {
   public:
    //Constructors (have no return type)
    Student();  //default constructor with no parameters
    Student(int newId, string newName);
    Student(int newId, string newName, double newScore);
    // setter/mutator functions
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    // getter/accessors function
    int getId();
    string getName();
    double getScore();

    //helper functions
    void output();
    char getGrade();
    void input();

   private:
    int id;
    string name;
    double score;
};

int main(int argc, char const *argv[]) {
    Student s;  // Object of type Student

    s.output();
    s.setId(123);  // set the value of id to 123
    s.setName("Bob");
    s.setScore(98);

    cout << "**************" << endl;
    s.output(); //sending a message to s to print itself
    
    Student s2(-678, "Jim");
    cout << "**************" << endl;
    s2.output();

    Student s3(999, "Sue", 95);
    cout << "**************" << endl;
    s3.output();


    return 0;
}  /// main

//default constructor
Student::Student(){
    id = 0;
    name = "NA";
    score = -1;
}

Student::Student(int newId, string newName){
    if (newId >= 0)
    {
        id = newId;
    }
    else {
        id = 0;
    }
    if (newName != "")
    {
        name = newName;
    }
    else {
        name = "NA";
    }
    
    score = -1;
}
Student::Student(int newId, string newName, double newScore){
    if (newId >= 0)
    {
        id = newId;
    }
    else {
        id = 0;
    }
    if (newName != "")
    {
        name = newName;
    }
    else {
        name = "NA";
    }
    if (newScore >= -1)
    {
        score = newScore;
    }
    else {
        score = -1;
    }
}
void Student::setId(int newId) {
    if (newId >= 0)
    {
        id = newId; 
    }
}
void Student::setName(string newName) {
    if (newName != "") {
        name = newName;
    }
}

void Student::setScore(double newScore) {
    if (newScore >= -1) {
        score = newScore;
    }
}

int Student::getId() { 
    return id; 
}

string Student::getName() { 
    return name; 
}

double Student::getScore() { 
    return score; 
}
void Student::output(){
    cout << "ID: " << id << endl;
    cout << "Name: " << getName() << endl;
    cout << "Score: " << getScore() << endl;
}


