/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 6, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// Student docs
class Student{
public:
    //setters/mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //getters/accessors
    int getId();
    string getName();
    double getScore();

private:
    int id;
    string name;
    double score; //comments
}; // ';' is required

///Constants and function prototypes
void printStudent(const Student &s);

int main(int argc, char const *argv[]) {
    Student s1;
    s1.setId(5);
    cout << s1.getId() << endl;
    
  
    //printStudent(s1);
    
    return 0;
} /// main

int Student::getId(){
    return id;
}
void Student::setId(int newId){
    id = 0;
    if (newId > 0)
    {
        id = newId;
    }
    
}




// void printStudent(const Student &s){
//     cout << " Name: " << s.name << endl;
//     cout << "   ID: " << s.id << endl;
//     cout << "Score: " << s.score << endl;
// }


