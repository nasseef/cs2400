/**
 *   @file: struct.cc
 * @author: Nasseef Abukamail
 *   @date: November 13, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>
#include "student.h"
#include "student.h"

using namespace std;
///Constants and function prototypes
//comment

int main(int argc, char const *argv[]) {

    
    ifstream ins;
    ins.open("data.txt"); 
    if (ins.fail())
    {
        cout << "Error: file not found";
        exit(0);
    }
    int id;
    string name;
    double score;

    ins >> id >> score;
    ins.ignore();
    getline(ins, name);
    Student s(id, name, score);

    
    ins >> id >> score;
    ins.ignore();
    getline(ins, name);

    Student s2(id, name, score);

    
    
    vector<Student> allStudents;
    allStudents.push_back(s);
    allStudents.push_back(s2);

    for (size_t i = 0; i < allStudents.size(); i++)
    {
        allStudents.at(i).output();
    }
    
    ins.close();
    return 0;
} /// main

