/**
 *   @file: random.cc
 * @author: Nasseef Abukamail
 *   @date: September 21, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
    srand(time(0)); //seeding the random number generator (only once)
    
    for (size_t i = 0; i < 10; i++)
    {
        int randomNumber = rand();
        int faceValue = randomNumber % 12 + 1;//1-6
        cout << "Random number is " << faceValue << endl;
    }
    
    /*add code*/
    return 0;
} /// main