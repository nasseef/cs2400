/**
 *   @file: structs.cc
 * @author: Nasseef Abukamail
 *   @date: November 06, 2019
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

// declare a structure
class Student {
   public:
    //constructors
    Student();
    Student(int newId, string newName, double newScore);
    // setter/mutator
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    // getter/accessor
    int getId();
    string getName();
    double getScore();

    //helper functions
    void output();
    char getGrade();

   private:
    int id;
    string name;
    double score;
};

/// function prototypes

Student inputStudent();

int main(int argc, char const *argv[]) {
    Student s;
    s.output();
    Student s2(333, "Ed", 99);
    s2.output();
   

    s.setId(123);
    cout << "Id: " << s.getId() << endl;
    s.setName("Jim");
    cout << "Name: " << s.getName() << endl;
    
    s.setScore(-90);
    cout << "Score: " << s.getScore() << endl;
    return 0;
}  /// main

Student::Student(){
    //initialize the data
    id = 0;
    name = "N/A";
    score = -1;
}

Student::Student(int newId, string newName, double newScore){
    if(newId >= 0){
        id = newId;
    }
    else {
        id = 0;
    }

    if(newScore >= 0){
        score = newScore;
    }
    else {
        score = -1;
    }
    if(newName == ""){
        newName = "N/A";
    }
    else {
        name = newName;
    }
}
void Student::setId(int newId) {
    if (newId >= 0) {
        id = newId;
    }
}

int Student::getId() { return id; }
void Student::setName(string newName) {
    if (newName != "") {
        name = newName;
    } 
}
string Student::getName(){
    return name;
}

void Student::setScore(double newScore){
    if (newScore >= -1) //valid  
    {
        score = newScore;
    }
    
}
double Student::getScore(){
    return score;
}

//Helper functions
void Student::output(){
    cout << "Name: " << name << endl;
    cout << "Id: " << id << endl;
    cout << "Score: " << score << endl;
}