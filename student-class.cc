/**
 *   @file: student-struct.cc
 * @author: Nasseef Abukamail
 *   @date: April 03, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

///Constants and function prototypes
//creates an new type called Student
class Student{
public:
    //Constructors
    Student(); //Default constructor (no parameters)
    Student(int newID, string newName);

    //mutator or a setter
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);
    //accessors or getters
    int getId();
    string getName();
    double getScore();
    void output();
private:
    string name;
    int id;
    double score;
    
}; //; is important

void printStudent(Student st);
Student inputStudent();
int searchById(const vector <Student> &allStudents, int targetID);

int main(int argc, char const *argv[]) {

    Student s;
    s.output();


    Student s2(100, "Sue");
    s2.output();
   

    
    s2.setId(-100);
    s2.output();
    s2.setScore(90);
    s2.setScore(-9);
    s2.output();
    
    return 0;
    s.setName("");
    cout << "Name: " << s.getName() << endl;
    cout << "Score: " << s.getScore() << endl;
    cout << "ID: " << s.getId() << endl;


    
   
    printStudent(s);
    return 0;
} /// main

Student::Student(){
    name = "N/A";
    id = 0;
    score = -1;
}

Student::Student(int newId, string newName){
    id = newId;
    if (id < 0)
    {
        id = 0;
    }
    name = newName;
    if (name == "")
    {
       name = "N/A";
    }
    score = -1;
    
}
void Student::setId(int newId){
    if (newId >= 0)
    {
        //default value
        id = newId;
    }

}
int Student::getId(){
    return id;
}

void Student::setScore(double newScore){
    if (newScore >= 0 && newScore <= 100)
    {
        score = newScore;
    }
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

string Student::getName(){
    return name;
}

void Student::output(){
    cout << "Name:  " << name << " ";
    cout << "ID:    " << id << " ";
    cout << "Score: " << score << endl;
}

