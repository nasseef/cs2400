/**
 *   @file: structs.cc
 * @author: Nasseef Abukamail
 *   @date: November 06, 2019
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

// declare a structure
class Student {
public:
    //setter/mutator
    void setId(int newId);

    //getter/accessor
    int getId();
private:
    int id;
    string name;
    double score;
};

/// function prototypes


Student inputStudent();

int main(int argc, char const *argv[]) {
    Student s;
    s.setId(-123);
    cout << "Id: " << s.getId() << endl;
    return 0;
}  /// main

void Student::setId(int newId){
    // if (newId >= 0)
    // {
    //     id = newId;
    // }
    // else {
    //     id = 0; //default
    // }
    id = newId >= 0 ? newId : 0;
}

int Student::getId(){
    return id;
}