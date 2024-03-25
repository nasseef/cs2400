/**
 *   @file: student-struct.cc
 * @author: Nasseef Abukamail
 *   @date: March 25, 2024
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

int main(int argc, char const *argv[]) {

    Student s = {"Bob", 12, 50};
    cout << "Name: " << s.name << endl;

    //s.name = "Sue";

    cout << "Name: " << s.name << endl;

    Student s2 = {"Sue", 19, 90};

    vector<Student> allStudents;
    allStudents.push_back(s);
    allStudents.push_back(s2);

    cout << "Name: " << allStudents.at(0).name << endl;


    return 0;
} /// main