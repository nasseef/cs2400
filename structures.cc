/**
 *   @file: structures.cc
 * @author: Nasseef Abukamail
 *   @date: March 30, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// Student docs
struct Student{
    int id;
    string name;
    double score; //comments
}; // ';' is required

///Constants and function prototypes
void printStudent(const Student &s);
void inputStudent(Student &s);

int main(int argc, char const *argv[]) {
    Student s1;
    Student s2 = {123, "Jim", 87};
    inputStudent(s1);
    printStudent(s1);

    printStudent(s2);
    
    return 0;
} /// main

void printStudent(const Student &s){
    cout << " Name: " << s.name << endl;
    cout << "   ID: " << s.id << endl;
    cout << "Score: " << s.score << endl;
}

void inputStudent(Student &s){
    cout << "Enter the name: ";
    cin >> s.name;
    cout << "Enter the ID: ";
    cin >> s.id;
    cout << "Enter the score: ";
    cin >> s.score;
}
