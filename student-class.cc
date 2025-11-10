/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: November 10, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

class Student{
public:
    string getName();
    int getId();
    double getScore();
    
    void setName(string newName);
    void setId(int newId);
    void setScore(double newScore);

    void output();
private:
    string name;
    int id;
    double score;
};
///Constants and function prototypes
void printStudent(const Student &theStudent);

int main(int argc, char const *argv[]) {
    Student s;
    s.setName("");
    s.setId(-562);
    s.setScore(55);
    cout << "The first student" << endl;
    s.output();


   
    return 0;
} /// main

void Student::output(){
    cout << " Name: " << name << endl;
    cout << "   ID: " << id << endl;
    cout << "Score: " << score << endl;
}

string Student::getName(){
    return name;
}
    int Student::getId(){
        return id;
    }
    double Student::getScore(){
        return score;
    }
    
    void Student::setName(string newName){
        name = newName;
        if (newName == "")
        {
            name = "N/A";
        }
        
    }
    void Student::setId(int newId){
        id = newId;
        if (newId < 0)
        {
            id = 0;
        }
        
    }
    void Student::setScore(double newScore){
        score = newScore;
    }
    
