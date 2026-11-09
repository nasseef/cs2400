/**
 *   @file: student-struct.cc
 * @author: Nasseef Abukamail
 *   @date: November 09, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <vector>
using namespace std;

// Student docs
class Student{
public:
    //setters or mutators
    void setId(int newId);

    //getters or accessors
    int getId();
private:
    //member variables
    int id;
    string name;
    double score; //comments
}; // ';' is required

///Constants and function prototypes

void printStudent(const Student &st);



int main(int argc, char const *argv[]) {
    
   Student s1;
   s1.setId(0);
   cout << "id: " << s1.getId() << endl;
//    s1.name = "Sue";
//    s1.score = -55;
//    printStudent(s1);

//    Student s2 = {234, "John", 99};
//    printStudent(s2);
   
   //load the students into a vector of students from the data file

    return 0;
} /// main

void Student::setId(int newId){
    id = newId;
    if (newId < 0)
    {
        id = 0; //default
    }
    
}

int Student::getId(){
    return id;
}





// void printStudent(const Student &st){
//     cout << "   ID: " << st.id << endl;
//     cout << " Name: " << st.name << endl;
//     cout << "Score: " << st.score << endl;
// }

// void loadData(ifstream &ins, vector<Student> &all){
//     Student s;

//     while(ins >> s.id){
//         ins >> s.score;
//         getline(ins, s.name);
//         all.push_back(s);
//     }

// }
