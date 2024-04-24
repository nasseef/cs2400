/**
 *   @file: die-class.cc
 * @author: Nasseef Abukamail
 *   @date: April 22, 2024
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

class Die {
   public:
    Die();
    Die(int newNumSides);

    // setters/mutators
    void setNumSides(int newNumSides);

    // getters/accessors
    int getNumSides();
    int getFaceValue();

    //helper functions
    void output();
    void roll();

   private:
    int numSides;
    int faceValue;
};
/// Constants and function prototypes

int main(int argc, char const *argv[]) {
    Die d1(12);
    d1.output();
    cout << endl;
    d1.roll();
    d1.output();
    cout << endl;

    d1.setNumSides(20);
    d1.output();
    cout << endl;
    return 0;
}  /// main

Die::Die() {
    numSides = 6;
    srand(time(0));
    faceValue = rand() % numSides + 1;
}

Die::Die(int newNumSides) {
    numSides = 6;
    if (newNumSides > 1) {
        numSides = newNumSides;
    }

    srand(time(0));
    faceValue = rand() % numSides + 1;
}
void Die::output() { cout << "Face Value: " << faceValue; }

void Die::roll(){
    faceValue = rand() % numSides + 1;
}

void Die::setNumSides(int newNumSides){
    if (newNumSides > 1)
    {
        numSides = newNumSides;
        roll();
    }
    
}
