/**
 *   @file: random.cc
 * @author: Nasseef Abukamail
 *   @date: September 25, 2024
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {
   
    srand(time(nullptr));
    
    cout << "10 random numbers: ";
    for (size_t i = 0; i < 10; i++)
    {
        int randomNumber = rand() % 6 + 1;
        
        cout << randomNumber << " ";
    }
    cout << endl;
    /*add code*/
    return 0;
} /// main