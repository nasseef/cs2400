/**
 *   @file: arrays.cc
 * @author: Nasseef Abukamail
 *   @date: October 14, 2020
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
const int SIZE = 10;
/// function prototypes

int main(int argc, char const *argv[]) {

    int numbers[SIZE]; //garbage in positions 5-9, 10 elements
    // int numbers2[] = {12, 4, 9, 8, 5}; //number of elements is 5

    int count = 0;

    // 12, 5, 9, 8 , 7, -9

    int num;
    cout << "Enter numbers terminated by a negative value" << endl;
    int i = 0;
    cin >> num;
    
    while (num >= 0)
    {
        count++;
        numbers[i] = num;
        i++;
        cin >> num;
    }
    
    cout << "Count is " << count << endl;

    for (size_t i = 0; i < count; i++) //size_t === unsigned int
    {
        cout << numbers[i] << endl;
    }
    
    // numbers[0] = 23;
    // numbers[1] = 5;
    // numbers[2] = 12;

    // cout << (numbers[0] + 8)<< endl;
    // cout << sqrt(numbers[2]) << endl;
    return 0;
}  /// main