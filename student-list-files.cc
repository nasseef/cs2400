/**
 *   @file: student-struct.cc
 * @author: Nasseef Abukamail
 *   @date: November 06, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>

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
Student inputStudent();
void printAllStudents(const vector<Student> &allStudents);
void loadData(vector<Student> &allStudents);

int main(int argc, char const *argv[]) {

    vector<Student> allStudents;
    //load all student data from a file
    loadData(allStudents);
    printAllStudents(allStudents);

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
Student inputStudent(){
    Student s;
    cout << "Enter student name: ";
    cin >> s.name;
    cout << "Enter student id: ";
    cin >> s.id;
    cout << "Enter student score: ";
    cin >> s.score;
    return s;
}

void printAllStudents(const vector<Student> &allStudents){
    for (size_t i = 0; i < allStudents.size(); i++)
    {
        printStudent(allStudents.at(i));
    }
}

void loadData(vector<Student> &allStudents){
    ifstream ins;
    ins.open("students.txt");
    if (ins.fail())
    {
        cout << "Error: file not found" << endl;
        exit(0);
    }
    int sId;
    double sScore;
    string sName;
    ins >> sName >> sId >> sScore;
    while (!ins.eof()){
        Student s = {sName, sId, sScore};
        allStudents.push_back(s);
        ins >> sName >> sId >> sScore;
    }
    ins.close();

}