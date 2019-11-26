/**
 *   @file: student-scores.cc
 * @author: Nasseef Abukamail
 *   @date: November 25, 2019
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
    Student(int newId, string newName);
    // setter/mutator
    void setId(int newId);
    void setName(string newName);
    void addScore(double newScore);
    void setScoreAt(int index, double newScore);

    // getter/accessor
    int getId();
    string getName();
    double getScoreAt(int index);
    double getAverage();

    //helper functions
    void output();
    char getGrade();
    void removeScoreAt(int index);

   private:
    int id;
    string name;
    vector <double> scores;
};

/// function prototypes

Student inputStudent();

int main(int argc, char const *argv[]) {
    Student s;
    s.output();
    Student s2(333, "Ed");
    s2.output();
   

    s.setId(123);
    cout << "Id: " << s.getId() << endl;
    s.setName("Jim");
    cout << "Name: " << s.getName() << endl;
    
    return 0;
}  /// main

Student::Student(){
    //initialize the data
    id = 0;
    name = "N/A";
}

Student::Student(int newId, string newName){
    if(newId >= 0){
        id = newId;
    }
    else {
        id = 0;
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

void Student::setName(string newName) {
    if (newName != "") {
        name = newName;
    } 
}

void Student::setScoreAt(int index, double newScore){
    if (index < 0 || index >= scores.size())
    {
        return;
    }
    
    if (newScore >= -1) //valid  
    {
        scores[index] = newScore;
    }
    
}

int Student::getId() { return id; }

string Student::getName(){
    return name;
}



//Helper functions
void Student::output(){
    cout << "Name: " << name << endl;
    cout << "Id: " << id << endl;
    for (size_t i = 0; i < scores.size(); i++)
    {
        cout << scores[i] << " ";
    }
    
}

void Student::addScore(double newScore){
    if (newScore >= 0)
    {
        scores.push_back(newScore);
    }
}