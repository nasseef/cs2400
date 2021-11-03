/**
 *   @file: structures.cc
 * @author: Nasseef Abukamail
 *   @date: November 01, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

class Student{ //capitalized
public:

    //Mutators or setters
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //accessors or getters
    int getId() const; // get_id
    string getName() const;
    double getScore() const;

//member variables
private:
    int id;
    string name;
    double score;
}; //semicolon is required



///Constants and function prototypes
void printStudent(Student s);
void inputStudent(Student &s);
int main(int argc, char const *argv[]) {

    Student s;
    s.setId(-10);
    int myId = s.getId();

    cout << "my id: " << myId << endl;

    s.setName("");
    string myName = s.getName();
    cout << "my name: " << myName << endl;
   
   
    return 0;
} /// main

int Student::getId() const{
    return id;
}

string Student::getName() const{
    return name;
}
void Student::setId(int newId){
    if (newId < 0)
    {
        id = 0;  //default
    }
    else {
        id = newId;
    }
    
}
void Student::setName(string newName){
    if (newName == "")
    {
        name = "N/A";
    }
    else {
        name = newName;
    }
    
}

void Student::setScore(double newScore){
    if (newScore < 0)
    {
        score = -1; //default value (not taken)
    }
    score = newScore;
    
}
// void printStudent(Student s){
//     cout << "ID: " << s.id << endl;
//     cout << "Name: " << s.name << endl;
//     cout << "Score: " << s.score << endl;
// }

// void inputStudent(Student &s){
//     cout << "ID: ";
//     cin >> s.id;
//     cout << "Name: ";
//     cin >> s.name;
//     cout << "Score: ";
//     cin >> s.score;
// }
