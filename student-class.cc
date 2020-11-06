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
    //setters/mutators
    void setId(int newId); 
    void setName(string newName);
    void setScore(double newScore);

    //getter/accessors
    int getId();
    string getName();
    double getScore();

private:
    string name;
    int id;
    double score;

};
///function prototypes

int main(int argc, char const *argv[]) {

    Student s;
    s.setId(0);  //replace s.id = 123;

    int myId = s.getId();
    cout << "My Id " << myId << endl;
    s.setId(234);
    cout << "My Id: " << s.getId() << endl;

    s.setName("");
    cout << "Name: " << s.getName() << endl;
    return 0;
} /// main

void Student::setId(int newId){ //member function of the class Student
    if (newId >= 0) //0 is my default
    {
        id = newId;
    }
    else {
        id = 0; //default based on business rules
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
    else {
        name = "N/A"; //default
    }
}

string Student::getName(){
    return name;
}