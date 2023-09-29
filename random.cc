/**
 *   @file: random.cc
 * @author: Nasseef Abukamail
 *   @date: September 29, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
    srand(time(nullptr)); //seeding the random number generator (only once)
    
    for (size_t i = 0; i < 5; i++)
    {
        int randomNumber = rand();
        randomNumber = randomNumber % 6 + 1;
        cout << "Random number is " << randomNumber << endl;
    }
    
    /*add code*/
    return 0;
} /// main