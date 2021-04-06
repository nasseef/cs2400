/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 05, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
class Student{
public:
    //setter/mutator functions
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //getter/accessors function
    int getId();
    string getName();
    double getScore();
    
private:
    int id;
    string name;
    double score;
};

int main(int argc, char const *argv[]) {
    Student s;  //Object of type Student

    s.setId(123); //set the value of id to 123

    cout << "Id: " << s.getId() << endl;

    s.setId(-123);
    cout << "Id: " << s.getId() << endl;

    return 0;
} /// main

void Student::setId(int newId){
    if (newId >= 0)
    {
        id = newId; 
    }
}

int Student::getId(){
    return id;
}