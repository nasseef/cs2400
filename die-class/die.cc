/**
 *   @file: die.cc
 * @author: Nasseef Abukamail
 *   @date: December 02, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
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
    if (newNumSides < 2)
    {
        numSides = 6;
    }
    else {
        numSides = newNumSides;
    }
    // numSides = newNumSides < 2 ? 6 : newNumSides;

    faceValue = rand() % numSides + 1;
}

int Die::getNumSides(){
    return numSides;
}
int Die::getFaceValue(){
    return faceValue;
}

void Die::setNumSides(int newNumSides){
    if (newNumSides >= 2)
    {
        numSides = newNumSides;
        faceValue = rand() % numSides + 1;
    }
}

int Die::roll(){
        faceValue = rand() % numSides + 1;
        return faceValue;
}