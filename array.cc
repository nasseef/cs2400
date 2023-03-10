/**
 *   @file: array.cc
 * @author: Nasseef Abukamail
 *   @date: March 08, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
const int SIZE = 10;
int main(int argc, char const *argv[]) {

    int numbers[SIZE] = {5, 9, 2, 6, 7};
    int count = 5;
    numbers[count] = 100;
    count++;
    for (size_t i = 0; i < count; i++)
    {
        cout << numbers[i] << endl;
    }
    
   

    
    return 0;
} /// main