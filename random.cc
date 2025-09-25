/**
 *   @file: random.cc
 * @author: Nasseef Abukamail
 *   @date: September 24, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
    srand(time(nullptr));
    cout << "5 random numbers: ";
    for (size_t i = 0; i < 5; i++)
    {
        int randomNumber = rand() % 6 + 1;
        
        cout << randomNumber << " ";
    }

    cout << endl;
    return 0;
} /// main