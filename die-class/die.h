#ifndef DIE_H
#define DIE_H
#include <iostream>
#include <fstream>

using namespace std;

class Die {
public:
    Die();//default numSide to 6, faceValue = random
    Die(int newNumSides); //faceValue = random

    //getters
    int getNumSides();
    int getFaceValue();

    //setters
    void setNumSides(int newNumSides);

    //helper function
    int roll();  //set the faceValue to a random number

    //overload the output operator

private:
    int faceValue;
    int numSides;
};

#endif
