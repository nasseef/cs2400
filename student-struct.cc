/**
 *   @file: structures.cc
 * @author: Nasseef Abukamail
 *   @date: November 03, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

struct Student{
    string name;
    int id;
    double score;
};
///Constants and function prototypes
void printStudent(const Student &theStudent);
void printAllStudents(const vector<Student> &allStudents);

int main(int argc, char const *argv[]) {
    Student s;
    s.name = "John";
    s.id = 562;
    s.score = 55;
    cout << "The first student" << endl;
    printStudent(s);
    
    Student s2 = {"Sue", 976, 90.0};
    cout << "The second student" << endl;
    printStudent(s2);

    cout << "Printing all Students" << endl;
    vector <Student> allStudents;
    ifstream ins;
    ins.open("students.txt");
    if (ins.fail())
    {
        cout << "File does not exist" << endl;
        exit(0);
    }
    
    //read student data into the vector allStudents
    //importStudents(allStudents, ins);
    ins.close();

    printAllStudents(allStudents);
    return 0;
} /// main

void printStudent(const Student &theStudent){
    cout << " Name: " << theStudent.name << endl;
    cout << "   ID: " << theStudent.id << endl;
    cout << "Score: " << theStudent.score << endl;
}

void printAllStudents(const vector<Student> &allStudents){
    for (size_t i = 0; i < allStudents.size(); i++)
    {
        printStudent(allStudents.at(i));
    }
    // for(Student s : allStudents){
    //     printStudent(s);
    // }
}
