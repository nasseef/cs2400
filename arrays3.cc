/**
 *   @file: arrays2.cc
 * @author: Nasseef Abukamail
 *   @date: October 21, 2019
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes
double totalPay(const double salaries[], int numEmployees);
int main(int argc, char const *argv[]) {

    double salaries[20] = {9, 10, 3, 15, 26, 23, 22, 17, 10, 5};
    int numEmployees = 4;
    double total = totalPay(salaries, numEmployees);
    cout << "Total pay: " << total << endl;
    return 0;
}/// main

double totalPay(const double salaries[], int numEmployees){
    double total = 0;
    for (int i = 0; i < numEmployees; i++)
    {
        total += salaries[i];
    }
    return total;
}
