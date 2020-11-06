/**
 *   @file: structures.cc
 * @author: Nasseef Abukamail
 *   @date: October 30, 2020
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

struct Student {
    string name;
    int id;
    double score;
};  //; is required

/// function prototypes
void printStudent(const Student &s);
void printAllStudents(const vector <Student> &allStudents);

Student readStudent();

int main(int argc, char const *argv[]) {
    Student s = {"Mary", 345, 90.0};
    vector <Student> allStudents;

    s.name = "Bob";
    s.id = 123;
    s.score = 87;
    allStudents.push_back(s);
    
    //printStudent(allStudents.at(0));

    Student s2 = readStudent();
    allStudents.push_back(s2);
    //printStudent(allStudents.at(1));

    Student s3 = {"Jim", 789, 100};
    allStudents.push_back(s3);

    printAllStudents(allStudents);
    
    return 0;
}  /// main

void printStudent(const Student &s) {
    cout << "Name: " << s.name << endl;
    cout << "ID: " << s.id << endl;
    cout << "Score: " << s.score << endl;
}

Student readStudent(){
    Student s;
    cout << "Enter the name: ";
    cin >> s.name;
    cout << "Enter the id: ";
    cin >> s.id;
    cout << "Enter the score: ";
    cin >> s.score;
    return s;
}

void printAllStudents(const vector <Student> &allStudents){
    for (size_t i = 0; i < allStudents.size(); i++)
    {
        printStudent(allStudents.at(i));
    }
}