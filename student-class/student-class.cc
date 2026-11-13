/**
 *   @file: student-struct.cc
 * @author: Nasseef Abukamail
 *   @date: November 09, 2026
 *  @brief: Add Description
 */

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

// Student docs
class Student {
   public:
   //Constructors
   Student();
   Student(int newId, string newName);

    // setters or mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);
    // getters or accessors
    int getId();
    string getName();
    double getScore();

    void output();

   private:
    // member variables
    int id;
    string name;
    double score;  // comments
};  // ';' is required

/// Constants and function prototypes



int main(int argc, char const* argv[]) {
    Student s1;
    s1.output();
    s1.setId(123);
    s1.setName("Sue");

    s1.setScore(23);
    s1.output();

    Student s2(345, "John");
    s2.setId(-123);
    s2.output();

    //    s1.name = "Sue";
    //    s1.score = -55;
    //    printStudent(s1);

    //    Student s2 = {234, "John", 99};
    //    printStudent(s2);

    // load the students into a vector of students from the data file

    return 0;
}  /// main

Student::Student(){
    id = 0;
    name = "N/A";
    score = -1;
}
Student::Student(int newId, string newName){
    id = newId;
    if (id < 0)
    {
        id = 0;
    }
    name = newName;
    if (name == "")
    {
        name = "N/A";
    }
    score = -1;
    
    
}
void Student::setId(int newId) {
    if (newId > -1)
    {
        id = newId;
    }
}
int Student::getId() { return id; }


void Student::setName(string newName) {
    if (newName != "")
    {
        name = newName;
    }

}
void Student::setScore(double newScore) {
    if (newScore > -1)
    {
        score = newScore;
    }
}

string Student::getName() { return name; }

double Student::getScore() { return score; }



void Student::output(){
    cout << "   ID: " << id << endl;
    cout << " Name: " << name << endl;
    cout << "Score: " << score << endl;
}

// void loadData(ifstream &ins, vector<Student> &all){
//     Student s;

//     while(ins >> s.id){
//         ins >> s.score;
//         getline(ins, s.name);
//         all.push_back(s);
//     }

// }
