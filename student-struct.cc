/**
 *   @file: student-struct.cc
 * @author: Nasseef Abukamail
 *   @date: April 03, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
//creates an new type called Student
struct Student{
    string name;
    int id;
    double score;
}; //; is important

void printStudent(const Student &st);
Student inputStudent();

int main(int argc, char const *argv[]) {

    Student st = {"Bob", 123, 50};
    cout << "Enter your name: ";
    Student st2 = inputStudent();
    printStudent(st2);
    
    return 0;
} /// main

void printStudent(const Student &st){
    cout << "Name:  " << st.name << endl;
    cout << "ID:    " << st.id << endl;
    cout << "Score: " << st.score << endl;
}

Student inputStudent(){
    Student s;
    cout << "Enter a student info" << endl;
    cin >> s.name >> s.id >> s.score;
    return s;
}
