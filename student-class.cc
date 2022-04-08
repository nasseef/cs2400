/**
 *   @file: structure.cc
 * @author: Nasseef Abukamail
 *   @date: March 30, 2022
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>

using namespace std;
class Student{
public:
    //Constructors
    Student(); //default constructor 
    Student(int newId, string newName);
    Student(int newId, string newName, double newScore);//exercise 
    
    
    //setters/mutators
    void setId(int newID);
    void setName(string newName);
    void setScore(double newScore);

    //getters/accessors
    int getId();
    string getName();
    double getScore();

    //helper function 
    string toString(); //return all data as one string
    void output(ostream &out);
private:
    string name;
    int id;
    double score;
}; //; is required
///Constants and function prototypes

// void printStudent(const Student &s);
// void printAllStudents(const vector <Student> &v);
// Student getStudent();
//find the average of all students
//sort all students by name
//sort all students by id
//read the data from a file

int main(int argc, char const *argv[]) {
    
    Student s;

    s.output(cout);

    s.setId(9000);
    s.setId(-9000);
    s.setName("Bob");
    s.setName("");

    s.setScore(100);
    s.output(cout);

    Student s2(100, "Jim");
    s2.output(cout);
    //s.output();
    
   


    // s.score = -100;
    // //s = getStudent();

    // allStudents.push_back(s);

    // //cout << s.name.at(0) << endl;
    // // printStudent(s);
    // // cout << s.name << endl;

    // Student s2 = {"Jim", 333, 100};
    // Student s3 = {"Ed", 444, 10};
    // Student s4 = {"Mary", 555, 70};

    // printStudent(s2);
    // allStudents.push_back(s2);
    // allStudents.push_back(s3);
    // allStudents.push_back(s4);

    // printAllStudents(allStudents);
    return 0;
} /// main

Student::Student(){
    id = 0;
    name = "NA";
    score = -1;
}
Student::Student(int newId, string newName){
    id = 0;
    if (newId > 0)
    {
        id = newId;
    }
    
    name = "NA";
    if (newName != "")
    {
        name = newName;
    }
    score = -1;
}
void Student::setId(int newId){

    if (newId > 0)
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

    if (newScore >= 0 && newScore <= 100)
    {
        score = newScore;
    }
    
}
int Student::getId(){
    return id;
}

string Student::getName(){
    return name;
}

double Student::getScore(){
    return score;
}

void Student::output(ostream &out){
    out << "Student Id: " << id << endl;
    out << "Student Name: " << name << endl;
    out << "Student Score: " << score << endl;
    
}
// void printStudent(const Student &s){
//     cout << " Name: " << s.name << endl;
//     cout << "   ID: " << s.id << endl;
//     cout << "Score: " << s.score << endl;
// }
// Student getStudent(){
//     Student st;
//     cout << "Enter the student's name: ";
//     cin >> st.name;
//     cout << "Enter the student's ID: ";
//     cin >> st.id;
//     cout << "Enter the student's score: ";
//     cin >> st.score;
//     return st;
// }
// void printAllStudents(const vector <Student> &v){
//     for (size_t i = 0; i < v.size(); i++)
//     {
//         printStudent(v.at(i));
//     }
    
// }


