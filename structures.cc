/**
 *   @file: structures.cc
 * @author: Nasseef Abukamail
 *   @date: March 30, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;

///Constants and function prototypes
struct Student{
    int id;
    string name;
    double score;
};

void printStudent(Student s);
void readStudent(Student &s);
int main(int argc, char const *argv[]) {

    Student s;
    //cin >> s.id;
    //ins >> s.id;
    s.id = 123;
    s.name = "Bob";
    s.score = 85;
    //readStudent(s);
    printStudent(s);

    Student s2 = {100, "Sue", 65};
    printStudent(s2);

    Student s3 = {456, "Jim", 75};

    vector <Student> allStudents;
    allStudents.push_back(s);
    allStudents.push_back(s2);
    allStudents.push_back(s3);

    cout << "Vector size: " << allStudents.size() << endl;

    //print the last letter of the name stored at position 1 in allStudents
    int length = allStudents.at(1).name.length();
    cout << "Last letter: " << allStudents.at(1).name.at(length - 1) << endl;

    //print all students
    cout << "***** All Students *****" << endl;
    for (size_t i = 0; i < allStudents.size(); i++)
    {
        //cout << allStudents.at(i).id;
        //cout << allStudents.at(i).name;
        //cout << allStudents.at(i).score;
        printStudent(allStudents.at(i));
    }
    
    return 0;
} /// main

void printStudent(Student s){
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Score: " << s.score << endl;
}

void readStudent(Student &s){
    cout << "Enter the id: ";
    cin >> s.id;
    cout << "Enter the name: ";
    cin >> s.name;
    cout << "Enter the score: ";
    cin >> s.score;
}
