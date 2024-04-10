/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 08, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
class Student
{
public:
    //Constructors
    Student(); //Default constructor
    Student(int newId, string newName);

    //setters or mutators
    void setId(int newID);
    void setScore(double newScore);
    void setName(string newName);

    //getters or accessors
    int getId();
    string getName();
    double getScore();


    void display();
private:
    string name;
    int id;
    double score;

};


int main(int argc, char const *argv[]) {

    Student s;
    s.display();
    s.setScore(100);
    s.setId(9);
    s.setName("Linda");
    s.setScore(-100);
    s.display();

    Student s2(99, "John");
    s2.display();
    return 0;
    s.setId(1000);
    s.setScore(55);
    s.setName("");
    //s.display();
    double myScore = s.getScore();

    cout << "score is " << s.getScore() << endl;
    return 0;
} /// main

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

