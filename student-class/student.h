/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: November 06, 2020
 *  @brief: Add Description
 */
#ifndef STUDENT_H
#define STUDENT_H 

#include <iostream>

using namespace std;

class Student{
public:
    //constructors
    Student(); //default constructor
    Student(string newName, int newId, double newScore);
    Student(string newName, int newId);
    


    //setters/mutators
    /**
     * document the functions
     **/
    void setId(int newId); 
    void setName(string newName);
    void setScore(double newScore);

    //getter/accessors
    int getId();
    string getName();
    double getScore();

    //helper functions
    void output();
    void input();
    char getGrade();
private:
    string name;
    int id;
    double score;

};

#endif