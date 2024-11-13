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
    //setters or mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //getters or accessors
    int getId();
    string getName();
    double getScore();

 private:
    string name;
    int id;
    double score;
};


///Constants and function prototypes
//void printStudent(const Student &s);

int main(int argc, char const *argv[]) {

    Student s1;
    

    s1.setId(-123);
    cout << "Id: " << s1.getId() << endl;

    s1.setName("");
    cout << "Name: " << s1.getName() << endl;
    s1.setScore(-58);
    cout << "Score: " << s1.getScore() << endl;
    //printStudent(s1);
    

    return 0;
} /// main

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
    else {
        id = 0;
    }
}
void Student::setName(string newName){
    if (newName != "")
    {
       name = newName;
    }
    else {
        name = "N/A";
    }
    
}

void Student:: setScore(double newScore){
    if (newScore >= 0)
    {
        score = newScore;
    }
    else {
        score = -1;
    }
    
}
// void printStudent(const Student &s){
//     cout << " Name: " << s.name << endl;
//     cout << "   ID: " << s.id << endl;
//     cout << "Score: " << s.score << endl;
// }





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
