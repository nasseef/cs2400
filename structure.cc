/**
 *   @file: structure.cc
 * @author: Nasseef Abukamail
 *   @date: March 30, 2022
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
}; //; is required
///Constants and function prototypes

void printStudent(const Student &s);
Student getStudent();
int main(int argc, char const *argv[]) {
    Student s;
    s = getStudent();

    printStudent(s);
    cout << s.name << endl;

    Student s2 = {"Jim", 333, 100};
    printStudent(s2);
    /*add code*/
    return 0;
} /// main

void printStudent(const Student &s){
    cout << " Name: " << s.name << endl;
    cout << "   ID: " << s.id << endl;
    cout << "Score: " << s.score << endl;
}
Student getStudent(){
    Student st;
    cout << "Enter the student's name: ";
    cin >> st.name;
    cout << "Enter the student's ID: ";
    cin >> st.id;
    cout << "Enter the student's score: ";
    cin >> st.score;
    return st;
}