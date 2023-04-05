/**
 *   @file: student-struct.cc
 * @author: Nasseef Abukamail
 *   @date: April 03, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

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
int searchById(const vector <Student> &allStudents, int targetID);

int main(int argc, char const *argv[]) {
    ifstream ins("roster.txt");
    if (ins.fail())
    {
        cout << "Error: " << endl;
        exit(0);
    }
    vector<Student> allStudents;

    Student s;
    ins >> s.name >> s.id >> s.score;
    s.id = -999;
    s.score = 1000000;

    while (!ins.eof())
    {
        allStudents.push_back(s);
        ins >> s.name >> s.id >> s.score;
    }
    
    int loc = searchById(allStudents, -999);
    if (loc != -1)
    {
        printStudent(allStudents.at(loc));
    }
    
    // Student st = {"Bob", 123, 50};
    // cout << "Enter your name: ";
    // Student st2 = inputStudent();

    //printStudent(s);
    ins.close();
    return 0;
} /// main

void printStudent(const Student &st){
    cout << "Name:  " << st.name << " ";
    cout << "ID:    " << st.id << " ";
    cout << "Score: " << st.score << endl;
}

Student inputStudent(){
    Student s;
    cout << "Enter a student info" << endl;
    cin >> s.name >> s.id >> s.score;
    return s;
}

int searchById(const vector <Student> &allStudents, int targetID){
    for (size_t i = 0; i < allStudents.size(); i++)
    {
        if (allStudents.at(i).id == targetID)
        {
            return i;
        }      
    }
    return -1;
    
}
