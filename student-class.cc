/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 09, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class Student{
public:
    //getters/accessors
    int getId();
    string getName();
    double getScore();

    //setters/mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //helper functions
    void output();
private:
    int id;
    string name;
    double score;
};
///Constants and function prototypes

int main(int argc, char const *argv[]) {
    Student s1;

    s1.output();
    // s1.setId(-12);
    // s1.setName("");
    // s1.setScore(-55);
    // s1.output();

    
    return 0;
} /// main

int Student::getId(){
    return id;
}

void Student::setId(int newId){
    id = 0;
    if (newId > 0)
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
    name = "N/A";
    if (newName != "")
    {
        name = newName;
    }
    
}
void Student::setScore(double newScore){
    score = -1;
    if (newScore >= 0)
    {
        score = newScore;
    }
    
}

void Student::output(){
    cout << "   ID: " << id << endl;
    cout << " Name: " << name << endl;
    cout << "Score: " << score << endl;
}