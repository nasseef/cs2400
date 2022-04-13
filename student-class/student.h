#include <iostream>
#include <fstream>

using namespace std;
class Student{
public:
    //Constructors
    Student(); //default constructor 
    Student(int newId, string newName);
    Student(int newId, string newName, double newScore);//exercise 
    
    
    //setters/mutators
    void setId(int newID);
    void setName(string newName);
    void setScore(double newScore);

    //getters/accessors
    int getId();
    string getName();
    double getScore();

    //helper function 
    string toString(); //return all data as one string
    void output(ostream &out);
private:
    string name;
    int id;
    double score;
}; //; is required