/**
 *   @file: student-struct.cc
 * @author: Nasseef Abukamail
 *   @date: March 25, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

struct Student{
    string name;
    int id;
    double score;
}; //; is required

///Constants and function prototypes
Student getStudentData();
void displayStudent(Student s);
void updatScore(Student &s);

void displayAllStudents(const vector<Student> &allStudents);

int main(int argc, char const *argv[]) {

    Student s = {"Bob", 12, 50};
    cout << "Name: " << s.name << endl;

    //s.name = "Sue";

    cout << "Name: " << s.name << endl;

    Student s2 = {"Sue", 19, 90};

    Student s3 = getStudentData();
    displayStudent(s3);

    vector<Student> allStudents;
    allStudents.push_back(s);
    allStudents.push_back(s2);
    allStudents.push_back(s3);

    cout << "-------------------------" << endl;
    displayAllStudents(allStudents);

    cout << "Name: " << allStudents.at(0).name << endl;


    return 0;
} /// main

void displayStudent(Student s){
    cout << " Student name: " << s.name << endl;
    cout << "   Student ID: " << s.id << endl;
    cout << "Student Score: " << s.score << endl;
}

Student getStudentData(){
    Student temp;
    cout << "Enter student name: ";
    cin >> temp.name;
    cout << "Enter student ID: ";
    cin >> temp.id;
    cout << "Enter student score: ";
    cin >> temp.score;
    return temp;
}

void updateScore(Student &s){
    s.score += 10;
}

void displayAllStudents(const vector<Student> &allStudents){
    for (size_t i = 0; i < allStudents.size(); i++)
    {
        displayStudent(allStudents.at(i));
    }
    
    for(Student s :  allStudents){
        displayStudent(s);
    }
}
