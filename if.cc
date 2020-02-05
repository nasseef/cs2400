/**
 *   @file: if.cc
 * @author: Nasseef Abukamail
 *   @date: February 05, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    double score;
    char grade = 'I';
    cout << "Enter a score: ";
    cin >> score;
    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
        {
            grade = 'A';
        }
        else if (score >= 80)
        {
            grade = 'B';
        }
        else if (score >= 70)
        {
            grade = 'C';
        }
        else if (score >= 60)
        {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
        cout << "Grade is " << grade << endl;
    }
    else {
        cout << "Error: Illegal score" << endl;
    }
    
    return 0;
}/// main