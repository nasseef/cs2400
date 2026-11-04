/**
 *   @file: student-struct.cc
 * @author: Nasseef Abukamail
 *   @date: November 04, 2026
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

// Student docs
struct Student{
    int id;
    string name;
    double score; //comments
}; // ';' is required

///Constants and function prototypes

void printStudent(const Student &st);

int main(int argc, char const *argv[]) {
    
   Student s1;
   s1.id = 123;
   s1.name = "Sue";
   s1.score = 55;
   printStudent(s1);

   Student s2 = {234, "John", 99};
   printStudent(s2);
   

    return 0;
} /// main

void printStudent(const Student &st){
    cout << "   ID: " << st.id << endl;
    cout << " Name: " << st.name << endl;
    cout << "Score: " << st.score << endl;
}
