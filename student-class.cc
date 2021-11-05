/**
 *   @file: structures.cc
 * @author: Nasseef Abukamail
 *   @date: November 01, 2021
 *  @brief: 
 *  Extra credit: Implement the third constructor and a function called getGrade that 
 *                returns (A, B, C, D, F, I(incomplete for a score of -1)). Test these functions
 *                inside your main program.
 *                There are 10 points that will be distributed to all the students who complete this 
 *                assignment. It's to your advantage not to tell others. If one person does the extra 
 *                credit they get 10 points. If two people do it, they each get 5 points, etc.
 * 
 *                Post your solution to a GitHub repository and email me a link to it. I will not accept it
 *                in any other ways. Email me the link no later than Saturday November 6 (11:59 PM).
 * 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

class Student{ //capitalized
public:
    //Constructors
    Student(); //default constructor called automatically
    Student(int newId, string newName);
    Student(int newId, string newName, double newScore); //exercise
    //Mutators or setters
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);
    

    //accessors or getters
    int getId() const; // get_id
    string getName() const;
    double getScore() const;

    //helper function
    void output();


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

    s.output();

    s.setId(10);
    s.setName("");
    s.setScore(-99);
    cout << "**************" << endl;
    s.output();

    Student s2(-20, "Jim");
    s2.output();
    return 0;
} /// main

//Constructors
Student::Student(int newId, string newName){
    //exercise
    id = 0;
    name = "N/A";
    score = -1;
    if (newId >= 0)
    {
        id = newId;
    }
    if (newName != "")
    {
        name = newName;
    }
    
    
}
Student::Student(){
    id = 0;
    name = "N/A";
    score = -1;
}
int Student::getId() const{
    return id;
}

string Student::getName() const{
    return name;
}

double Student::getScore() const{
    return score;
}
void Student::setId(int newId){

    if (newId >= 0)
    {
        id = newId;
    }
    
    
}
void Student::setName(string newName){
    if (newName != "")
    {
        name = newName;
       
    }
    
}

void Student::setScore(double newScore){
    if (newScore >= 0)
    {
        score = newScore;
    }
    
}

void Student::output(){
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Score: " << score << endl;
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
