/**
 *   @file: structures.cc
 * @author: Nasseef Abukamail
 *   @date: April 06, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
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

private:
    string name;
    int id;
    double score;
};

///function prototypes
void printStudent(Student s);
void inputStudent(Student &s);
int main(int argc, char const *argv[]) {
    Student s;
    s.setId(123);
    cout << "Id: " << s.getId() << endl;
    s.setName("");
    cout << "Name: " << s.getName() << endl;
    return 0;
}/// main

void Student::setId(int newId){
    if (newId >= 0)
    {
        id = newId;
    }
    else { //either ignore it or assign the default
        id = 0;
    }   
}

int Student::getId(){
    return id;
}

void Student::setName(string newName){
    if (newName.length() > 0)
    {
       name = newName;
    }
    else {
        name = "N/A"; //set to default
    }
}


string Student::getName(){
    return name;
}
// void printStudent(Student s){
//     cout << " Name: " << s.name << endl;
//     cout << "   ID: " << s.id << endl;
//     cout << "Score: " << s.score << endl;
// }

