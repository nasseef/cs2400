/**
 *   @file: more-functions.cc
 * @author: Nasseef Abukamail
 *   @date: February 22, 2023
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// Constants and function prototypes
/**
 *
 */
char getGrade(double score);

int main(int argc, char const *argv[]) { 
    double score;
    cout << "Enter a score: ";
    cin >> score;
    char grade = getGrade(score);
    cout << "Your score is " << score << endl;
    cout << "Your grade is " << grade << endl;

    return 0; 
}  /// main

// function definition
char getGrade(double score) {
    score += 10;
    cout << "Score inside getGrade " << score << endl;
    if (score >= 90) {
        return 'A';
    }
    if (score >= 80) {
        return 'B';
    }
    if (score >= 70) {
        return 'C';
    }
    if (score >= 60) {
        return 'D';
    }
    return 'F';
}
