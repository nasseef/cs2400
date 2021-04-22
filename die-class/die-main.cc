/**
 *   @file: die-main.cc
 * @author: Nasseef Abukamail
 *   @date: April 22, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
class Die{
public:
    Die();
    Die(int newNumSides);
    void setNumSides(int newNumSides);
    int getNumSides();
    int getFaceValue();

    //helper functions
    void roll();
private:
    int faceValue;
    int numSides;
};
int main(int argc, char const *argv[]) {

    Die d1; //6-sided die with a random face value
    cout << "D1 Face value: " << d1.getFaceValue() << endl;
    
    Die d2(12);
    d2.setNumSides(8);
    cout << "D2 Face value: " << d2.getFaceValue() << endl;

    cout << "roll the die 5 times" << endl;
    for (size_t i = 0; i < 5; i++)
    {
        d2.roll();
        cout << "D2 Face value: " << d2.getFaceValue() << endl;
    }
        
    return 0;
} /// main

Die::Die(){
    numSides = 6;
    srand(time(NULL));
    faceValue = rand() % numSides + 1;
}

Die::Die(int newNumSides){
    numSides = 6;
    if (newNumSides >= 2)
    {
        numSides = newNumSides;
    }
    srand(time(NULL));
    faceValue = rand() % numSides + 1;
}

void Die::roll(){
    faceValue = rand() % numSides + 1;
}
void Die::setNumSides(int newNumSides){
    if (newNumSides >= 2)
    {
        numSides = newNumSides;
        faceValue = rand() % numSides + 1;
    }
}

int Die::getFaceValue(){
    return faceValue;
}