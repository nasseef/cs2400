#ifndef STUDENT_H
#define STUDENT_H
/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 08, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
class Student
{
public:
    //Constructors
    /**
     * 
    */
    Student(); //Default constructor
    Student(int newId, string newName);

    //setters or mutators
    void setId(int newID);
    void setScore(double newScore);
    void setName(string newName);


    //getters or accessors
    int getId();
    string getName();
    double getScore();

    //helper functions
    void display();
private:
    string name;
    int id;
    double score;

};
#endif

