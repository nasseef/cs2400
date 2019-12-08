#include <iostream>
#include <fstream>
#include <cstdlib>
#include "die.h"
using namespace std;

Die::Die(){
    srand(time(NULL));
    numSides = 6;
    faceValue = rand() % numSides + 1;
}

Die::Die(int newNumSides){
    srand(time(NULL));
    numSides = newNumSides;
    faceValue = rand() % numSides + 1;
}
int Die::getFaceValue() {
    return faceValue;
}
void Die::setNumSides(int newNumSides){
    if (newNumSides > 0)
    {
        numSides = newNumSides;
    } 
}

    
int Die::roll() {//set the faceValue to a random number
    faceValue = rand() % numSides + 1;
    return faceValue;
}  
