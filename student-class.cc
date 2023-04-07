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
    //mutator or a setter
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);
    //accessors or getters
    int getId();
    string getName();
    double getScore();
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
    printStudent(s);
    s.setId(0);
    s.setScore(-9);
    s.setName("");
    cout << "Name: " << s.getName() << endl;
    cout << "Score: " << s.getScore() << endl;
    cout << "ID: " << s.getId() << endl;


    
   
    printStudent(s);
    return 0;
} /// main

void Student::setId(int newId){
    id = newId;
    if (newId < 0)
    {
        //default value
        id = 0;
    }
}
int Student::getId(){
    return id;
}

void Student::setScore(double newScore){
    score = newScore;
    if (score < 0 || score > 100)
    {
        score = -1;
    }
}

double Student::getScore(){
    return score;
}

    void Student::setName(string newName){
        name = newName;
        if (name == "")
        {
            name = "N/A";
        }
        
    }

string Student::getName(){
    return name;
}

void printStudent(Student st){
    cout << "Name:  " << st.getName() << " ";
    cout << "ID:    " << st.getId() << " ";
    cout << "Score: " << st.getScore() << endl;
}

