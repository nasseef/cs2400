/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: November 13, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

class Student
{
 public:
    //constructors
    Student();
    Student(int newId, string newName);

    //setters or mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //getters or accessors
    int getId();
    string getName();
    double getScore();

    //helper functions
    void output();
 private:
    string name;
    int id;
    double score;
};


///Constants and function prototypes
//void printStudent(const Student &s);

int main(int argc, char const *argv[]) {

    Student s1;
    s1.output();
    Student s2(999, "Sue");
    s2.output();

    return 0;
} /// main

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
        score = -1;
    }
    else {
        id = newId;
        name = newName;
        score = -1;
    }
    
}

//getters
int Student::getId(){
    return id;
}

string Student::getName(){
    return name;
}

double Student::getScore(){
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

void Student:: setScore(double newScore){
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





// void inputStudent(Student &s){
//     cout << "Enter student name: ";
//     cin >> s.name;
//     cout << "Enter student id: ";
//     cin >> s.id;
//     cout << "Enter student score: ";
//     cin >> s.score;
// }
// Student inputStudent(){
//     Student s;
//     cout << "Enter student name: ";
//     cin >> s.name;
//     cout << "Enter student id: ";
//     cin >> s.id;
//     cout << "Enter student score: ";
//     cin >> s.score;
//     return s;
// }
