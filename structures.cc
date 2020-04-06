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

struct Student{
    string name;
    int id;
    double score;
};

///function prototypes
void printStudent(Student s);
void inputStudent(Student &s);
int main(int argc, char const *argv[]) {
    Student s;
    inputStudent(s);
    vector <Student> allStudents;
    allStudents.push_back(s);
    Student s2 = {"Ed", 345, 90};
    allStudents.push_back(s2);
    Student s3 = {"Jim", 567, 80};
    allStudents.push_back(s3);
    for (size_t i = 0; i < allStudents.size(); i++)
    {
        cout << "Student: " << i << endl;
        printStudent(allStudents.at(i));
    }
    
    cout << "size of the vector: " << allStudents.size() << endl;

    
    return 0;
}/// main

void printStudent(Student s){
    cout << " Name: " << s.name << endl;
    cout << "   ID: " << s.id << endl;
    cout << "Score: " << s.score << endl;
}

void inputStudent(Student &s){
    cout << "Enter the name: ";
    cin >> s.name;
    cout << "Enter the id: ";
    cin >> s.id;
    cout << "Enter the score: ";
    cin >> s.score;
}