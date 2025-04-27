/**
 *   @file: die-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 23, 2025
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
    int getFaceValue();
    int getNumSides();
    void setNumSides(int newNumSides);

    int roll();

private:
    int faceValue;
    int numSides;
};
///Constants and function prototypes

int main(int argc, char const *argv[]) {
    Die d1;
    cout << "Face value: " << d1.getFaceValue() << endl;
    Die d2(12);
    cout << "Face value: " << d2.getFaceValue() << endl;
    
    cout << "Face value: " << d2.roll() << endl;
    
    return 0;
} /// main

Die::Die(){
    srand(time(0));
    numSides = 6;
    faceValue = rand() % numSides + 1;
}
Die::Die(int newNumsides){
    srand(time(0));
    numSides = newNumsides > 1 ? newNumsides : 6;
    faceValue = rand() % numSides + 1;
}

int Die::getFaceValue(){
    return faceValue;
}

void Die::setNumSides(int newNumSides){
    if (newNumSides > 1)
    {
        numSides = newNumSides;
        faceValue = rand() % numSides + 1;
    }
}

int Die::roll(){
        faceValue = rand() % numSides + 1;
        return faceValue;
}