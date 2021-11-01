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

struct Student{ //capitalized
    //member variables
    int id;
    string name;
    double score;
}; //semicolon is required



///Constants and function prototypes
void printStudent(Student s);
void inputStudent(Student &s);
int main(int argc, char const *argv[]) {

    Student s;
    s.id = 10;
    s.name = "Bob";
    s.score = 66;

    Student s2 = {99, "Jim", 86};
    Student s3 = {88, "Ed", 99};

    //printStudent(s);
    //cout << "*****************" << endl;
    //inputStudent(s2);
    //printStudent(s2);

    vector <Student> allStudents;
    allStudents.push_back(s);
    allStudents.push_back(s2);
    allStudents.push_back(s3);

    for (size_t i = 0; i < allStudents.size(); i++)
    {
        printStudent(allStudents.at(i));
    }
    
    return 0;
} /// main

void printStudent(Student s){
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Score: " << s.score << endl;
}

void inputStudent(Student &s){
    cout << "ID: ";
    cin >> s.id;
    cout << "Name: ";
    cin >> s.name;
    cout << "Score: ";
    cin >> s.score;
}
