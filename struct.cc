/**
 *   @file: struct.cc
 * @author: Nasseef Abukamail
 *   @date: November 13, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

struct Student{
    int id;
    string name;
    double score;
};
///Constants and function prototypes
void printStudent(const Student &st);

int main(int argc, char const *argv[]) {

    Student s;
    s.id = 33;
    s.name = "Sue";
    s.score = 60;

   

    Student s2 = {22, "Jim", 55};
    Student s3 = {44, "Bob", 40};
    vector<Student> allStudents;
    allStudents.push_back(s);
    allStudents.push_back(s2);
    allStudents.push_back(s3);
    for (size_t i = 0; i < allStudents.size(); i++)
    {
        printStudent(allStudents.at(i));
        cout << "---------" << endl;
    }
    
    return 0;
} /// main

void printStudent(const Student &st){
    cout << "ID:    " << st.id << endl;
    cout << "Name:  " << st.name << endl;
    cout << "Score: " << st.score << endl;
}
