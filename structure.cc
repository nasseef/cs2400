/**
 *   @file: structure.cc
 * @author: Nasseef Abukamail
 *   @date: March 30, 2022
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
}; //; is required
///Constants and function prototypes

void printStudent(const Student &s);
void printAllStudents(const vector <Student> &v);
Student getStudent();
//find the average of all students
//sort all students by name
//sort all students by id
//read the data from a file

int main(int argc, char const *argv[]) {
    vector <Student> allStudents;
    string myName;
    getline(cin, myName);

    Student s = {myName, 999, 99};
    s.id = -9000;
    s.score = -100;
    //s = getStudent();

    allStudents.push_back(s);

    //cout << s.name.at(0) << endl;
    // printStudent(s);
    // cout << s.name << endl;

    Student s2 = {"Jim", 333, 100};
    Student s3 = {"Ed", 444, 10};
    Student s4 = {"Mary", 555, 70};

    // printStudent(s2);
    allStudents.push_back(s2);
    allStudents.push_back(s3);
    allStudents.push_back(s4);

    printAllStudents(allStudents);
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
void printAllStudents(const vector <Student> &v){
    for (size_t i = 0; i < v.size(); i++)
    {
        printStudent(v.at(i));
    }
    
}
