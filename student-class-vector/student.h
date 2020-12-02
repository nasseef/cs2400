/**
 *   @file: student-class.cc
 * @author: Nasseef Abukamail
 *   @date: November 06, 2020
 *  @brief: Header file for Student class
 */
#ifndef STUDENT_H
#define STUDENT_H 

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Student{
public:
    //constructors
    Student(); //default constructor
    //Student(string newName, int newId, double newScore);
    Student(string newName, int newId);
    


    //setters/mutators
    /**
     * document the functions
     **/
    void setId(int newId); 
    void setName(string newName);
    void addScore(double newScore);
    void addScoreAt(int index, double newScore);//exercise 
    void setScoreAt(int index, double newScore);

    //getter/accessors
    int getId();
    string getName();
    double getScoreAt(int index);
    //double getScore();

    //helper functions
    void output(ostream &out);
    double getAverage(); //return -1 if no scores are in the vector
    char getGrade(); //return letter grade and I if average is -1
private:
    string name;
    int id;
    vector <double> scores;

};

#endif