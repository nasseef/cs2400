/*
 *        File: die-main.cc
 *      Author: Nasseef Abukamail
 *        Date: April 24, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "die.h"
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    Die d;
    cout << "Face value: " << d.getFaceValue() << endl;

    Die d2(12);
    cout << "Face value: " << d2.getFaceValue() << endl;
    d2.roll();
    cout << "Face value: " << d2.getFaceValue() << endl;

    return 0;
}// main
