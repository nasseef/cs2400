/**
 *   @file: die-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 20, 2022
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
    //getters/accessors
    int getNumSides();
    int getFaceValue();

    //setters/mutators
    void setNumSides(int newNumSides);
    
    void roll();
private:
    int numSides;
    int faceValue;
};
///Constants and function prototypes

int main(int argc, char const *argv[]) {

    Die d1;
    Die d2(12);
    cout << "D1: " << d1.getFaceValue() << endl;
    cout << "D2: " << d2.getFaceValue() << endl;
    

    for (size_t i = 0; i < 5; i++)
    {
        d2.roll();
        cout << "D2: " << d2.getFaceValue() << endl;
    }
    
    
    return 0;
} /// main

Die::Die(){
    numSides = 6;
    srand(time(nullptr)); //seeds the random number generator
    faceValue = rand() % numSides + 1;
}

Die::Die(int newNumSides){
    numSides = 6;
    if (newNumSides >= 2)   
    {
        numSides = newNumSides;
    }
    srand(time(nullptr)); //seeds the random number generator
    faceValue = rand() % numSides + 1;
    
}
int Die::getFaceValue(){
    return faceValue;
}

void Die::roll(){
    faceValue = rand() % numSides + 1;
}