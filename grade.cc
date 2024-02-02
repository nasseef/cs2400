/**
 *   @file: grade.cc
 * @author: Nasseef Abukamail
 *   @date: February 02, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    double score;
    char grade;

    cout << "Enter a score: ";
    cin >> score;

    if (score >= 90)
    {
        grade = 'A';
    } 
    else if(score >= 80){
        grade = 'B';
    }
    else if (score >= 70)
    {
        grade = 'C';
    }
    else if (score >= 60){
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    cout << "Grade is " << grade << endl;
    
    return 0;
} /// main