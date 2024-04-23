/**
 *   @file: die-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 22, 2024
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
    void output();
private: 
    int numSides;
    int faceValue;

};
///Constants and function prototypes

int main(int argc, char const *argv[]) {
    Die d1(12);
    d1.output();
    cout << endl;
    
    return 0;
} /// main

Die::Die(){
    numSides = 6;
    srand(time(0));
    faceValue = rand() % numSides + 1;
}

    Die::Die(int newNumSides){
        numSides = 6;
        if (newNumSides > 1)
        {
            numSides = newNumSides;
        }
        
        srand(time(0));
        faceValue = rand() % numSides + 1;
    }
void Die::output(){
    cout << "Face Value: " << faceValue;
}