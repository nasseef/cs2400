/**
 *   @file: die.h
 * @author: Nasseef Abukamail
 *   @date: December 02, 2020
 *  @brief: Add Description
 */
#ifndef DIE_H
#define DIE_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class Die{
public:
    Die();
    Die(int newNumSides);

    //getter/accessors
    int getNumSides();
    int getFaceValue();

    //mutators
    void setNumSides(int newNumSides);

    //helper
    int roll();
private:
    int numSides;
    int faceValue;
};
#endif