/**
 *   @file: die.cc
 * @author: Nasseef Abukamail
 *   @date: November 29, 2021
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

    //getters
    int getNumSides();
    int getFaceValue();

    //setters
    void setNumSides(int newNumSides);

    //helper functions
    void roll();
private:
    int numSides;
    int faceValue;
};
///Constants and function prototypes

int main(int argc, char const *argv[]) {
    // Die d1;
    // cout << "Face value: " << d1.getFaceValue() << endl;
    Die d2(12);
    d2.setNumSides(5);
    
    for (size_t i = 0; i < 100; i++)
    {
        d2.roll();
        cout << "Face value: " << d2.getFaceValue() << endl;
    }
    
    
    return 0;
} /// main

Die::Die(){
    srand(time(nullptr));
    numSides = 6;
    faceValue = rand() % numSides + 1;
}
Die::Die(int newNumSides){
    srand(time(nullptr));
    numSides = 6;
    if (newNumSides >= 2)
    {
        numSides = newNumSides;
    }
    faceValue = rand() % numSides + 1;
}

int Die::getFaceValue(){
    return faceValue;
}

void Die::roll(){
    faceValue = rand() % numSides + 1;
}

void Die::setNumSides(int newNumSides){
    if (newNumSides >= 2)
    {
        numSides = newNumSides;
    }
    faceValue = rand() % numSides + 1;
}