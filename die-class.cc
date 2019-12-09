/**
 *   @file: die-class.cc
 * @author: Nasseef Abukamail
 *   @date: December 04, 2019
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
class Die{
public:
    Die();
    Die(int newNumSides);
    //setters
    void setNumSides(int newNumSides);
    //getters
    int getFaceValue();
    int getNumSides();

    //helper functions
    void roll();
private: 
    int faceValue;
    int numSides;
};
///function prototypes

int main(int argc, char const *argv[]) {

    Die d;
    cout << "face value: " << d.getFaceValue() << endl;
    Die d2(12);
    cout << "face value: " << d2.getFaceValue() << endl;
    d2.roll();
    cout << "face value: " << d2.getFaceValue() << endl;
    cout << "Number of sides: " << d2.getNumSides() << endl;
    return 0;
}/// main

Die::Die(){
    numSides = 6;
    srand(time(NULL));
    roll();
}
int Die::getFaceValue(){
    return faceValue;
}

 Die::Die(int newNumSides){
    numSides = 6;  //default
    if (newNumSides > 1)
    {
        numSides = newNumSides;
    }
    srand(time(NULL));
    faceValue = rand() % numSides + 1;
 }
 void Die::roll(){
     faceValue = rand() % numSides + 1;
 }

 int Die::getNumSides(){
     return numSides;
 }