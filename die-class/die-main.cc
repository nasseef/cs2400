/**
 *   @file: die-main.cc
 * @author: Nasseef Abukamail
 *   @date: December 02, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "die.h"
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    Die d1;
    d1.setNumSides(20);
    cout << "Face value: " << d1.getFaceValue() << endl;

    Die d2(12);
    cout << "Face value: " << d2.getFaceValue() << endl;
    d2.roll();
    cout << "Face value: " << d2.getFaceValue() << endl;
    d2.roll();
    cout << "Face value: " << d2.getFaceValue() << endl;
    d2.roll();
    cout << "Face value: " << d2.getFaceValue() << endl;

    cout << "Face value " << d2.roll() << endl;
    return 0;
} /// main