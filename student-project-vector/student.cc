#include <iostream>
#include <string>

#include "student.h"
using namespace std;

Student::Student() {
    id = 0;
    name = "NA";
}
Student::Student(int newId, string newName) {
    if (newId < 0) {
        id = 0;
    }
    else {
        id = newId;
    }
    if (newName.length() == 0)
    {
        name = "NA";
    }
    else {
        name = newName;
    }
}
void Student::setId(int newId){
    if (newId < 0) {
        id = 0;
    }
    else {
        id = newId;
    }
}
void Student::setName(string newName) {
    //check the name
    name = newName;
}
void Student::setScoreAt(int scoreNumber, double newScore){
    if (scoreNumber >= scores.size() || newScore < 0) {
        return;
    }
    else {
        scores[scoreNumber] = newScore;
    }
}
int Student::getId() {
    return id;
}

string Student::getName(){
    return name;
}
double Student::getScoreAt(int scoreNumber){
    if (scoreNumber >= 0 && scoreNumber < scores.size()) {
        return scores[scoreNumber];
    }
    return -1;
}
void Student::addScore(double newScore) {
    if (newScore >= 0) {
        scores.push_back(newScore);
    }
    
}
ostream& operator << (ostream &out, const Student &s) {
    out << "Name:  " << s.name << endl;
    out << "ID:    " << s.id << endl;
    out << "Scores: ";
    for (size_t i = 0; i < s.scores.size(); i++) {
        out << s.scores.at(i) << " ";
    }
    return out;
}

double Student::getAverage() {
    if (scores.size() == 0) {
        return -1;
    }
    double total = 0;
    for (size_t i = 0; i < scores.size(); i++) {
        total += scores.at(i);
    }
    return total / scores.size();
    
}
char Student::getGrade() {
    double average = getAverage();
    if (average >= 90) {
        return 'A';
    }
    else if (average >= 80) {
        return 'B';
    }
    else if (average >= 70) {
        return 'C';
    }
    else if (average >= 60) {
        return 'D';
    }
    else if (average >= 0) {
        return 'F';
    }
    else {
        return 'I';
    }
}
