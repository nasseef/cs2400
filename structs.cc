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
    int id;
    string name;
    double score;
};

/// function prototypes

void displayStudent(const Student &s);
Student inputStudent();

int main(int argc, char const *argv[]) {
    Student s;
    s.id = 123;
    s.name = "Bob";
    s.score = 65;
    s.id = -12;

    displayStudent(s);
    Student s2 = inputStudent();
    displayStudent(s2);
    vector <Student> allStudents;
    allStudents.push_back(s2);
    allStudents.push_back(s);
    cout << "*************" << endl;
    // for (size_t i = 0; i < allStudents.size(); i++)
    // {
    //     displayStudent(allStudents.at(i));
    // }
    for (Student s : allStudents)
    {
        displayStudent(s);
    }
    
    
    return 0;
}  /// main

void displayStudent(const Student &s) {
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Score: " << s.score << endl;
}

Student inputStudent(){
    Student s;
    cout << "Enter student info" << endl;
    cin >> s.id >> s.name >> s.score;
    return s;

}