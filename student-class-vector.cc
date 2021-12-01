/**
 *   @file: structures.cc
 * @author: Nasseef Abukamail
 *   @date: November 01, 2021
 *  @brief:
 *
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

class Student {  // capitalized
   public:
    // Constructors
    Student();  // default constructor called automatically
    Student(int newId, string newName);

    // Mutators or setters
    void setId(int newId);
    void setName(string newName);
    void addScore(double newScore);               // at the end
    void setScoreAt(int index, double newScore);  // at index
    void removeScore(int index); //exercise 

    // accessors or getters
    int getId() const;  // get_id
    string getName() const;
    double getScoreAt(int index) const;

    // helper function
    void output();
    double getAverage();
    char getGrade();

    // member variables
   private:
    int id;
    string name;
    vector<double> scores;
};  // semicolon is required

/// Constants and function prototypes
void printStudent(Student s);
void inputStudent(Student &s);
int main(int argc, char const *argv[]) {
    Student s;

    s.output();

    s.setId(10);
    s.setName("Bob");
    cout << "**************" << endl;
    s.output();
    s.addScore(50);
    s.addScore(90);
    s.addScore(60);
    s.setScoreAt(3, 99);
    s.output();
    cout << "Average: " << s.getAverage() << endl;
    return 0;
}  /// main

// Constructors
Student::Student(int newId, string newName) {
    // exercise
    id = 0;
    name = "N/A";
    if (newId >= 0) {
        id = newId;
    }
    if (newName != "") {
        name = newName;
    }
}
Student::Student() {
    id = 0;
    name = "N/A";
}
int Student::getId() const { return id; }

string Student::getName() const { return name; }

double Student::getScoreAt(int index) const {
    if (index >= 0 && index < scores.size()) {
        return scores.at(index);
    }

    return -1;
}
void Student::setId(int newId) {
    if (newId >= 0) {
        id = newId;
    }
}
void Student::setName(string newName) {
    if (newName != "") {
        name = newName;
    }
}

void Student::setScoreAt(int index, double newScore) {
    if (index >= 0 && index < scores.size()) {
        if (newScore >= 0) {
            scores.at(index) = newScore;
        }
    }
}

void Student::addScore(double newScore) {
    if (newScore >= 0) {
        scores.push_back(newScore);
    }
}
void Student::output() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    for (size_t i = 0; i < scores.size(); i++)
    {
        cout << scores.at(i) << " ";
    }
    cout << endl;
}

double Student::getAverage(){
    double total = 0;
    for (size_t i = 0; i < scores.size(); i++)
    {
        total += scores.at(i);
    }
    if (scores.size() == 0) //no scores
    {
        return -1;
    }
    return total / scores.size();
    
}