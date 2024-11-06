/**
 *   @file: student-struct.cc
 * @author: Nasseef Abukamail
 *   @date: November 06, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

struct Student
{
    string name;
    int id;
    double score;
};

///Constants and function prototypes
void printStudent(const Student &s);
void inputStudent(Student &s);
int main(int argc, char const *argv[]) {

    Student s1;
    printStudent(s1);
    inputStudent(s1);
    printStudent(s1);
    Student s2 = {"Bob", 123, 55.6};
    printStudent(s2);

    return 0;
} /// main

void printStudent(const Student &s){
    cout << " Name: " << s.name << endl;
    cout << "   ID: " << s.id << endl;
    cout << "Score: " << s.score << endl;
}

void inputStudent(Student &s){
    cout << "Enter student name: ";
    cin >> s.name;
    cout << "Enter student id: ";
    cin >> s.id;
    cout << "Enter student score: ";
    cin >> s.score;
}
