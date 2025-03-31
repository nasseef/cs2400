/**
 *   @file: structures.cc
 * @author: Nasseef Abukamail
 *   @date: March 31, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

struct Student{
    string name;
    int id;
    double score;
}; //semicolon is required


///Constants and function prototypes
void printStudent(const Student s);
void inputStudent(Student &s);
void printAllStudents(vector<Student> all);

int main(int argc, char const *argv[]) {

    vector<Student> allStudents;

    Student s;
    s.name = "Sue";
    s.id = 123;
    s.score = 55;
    // printStudent(s);
    Student s2;
    inputStudent(s2);
    // printStudent(s2);
    allStudents.push_back(s);
    allStudents.push_back(s2);
    printAllStudents(allStudents);
    return 0;
} /// main

void printStudent(const Student s){
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

void printAllStudents(vector<Student> all){
    for (size_t i = 0; i < all.size(); i++)
    {
        printStudent(all.at(i));
    }
    
}
