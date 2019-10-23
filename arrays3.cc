/**
 *   @file: arrays2.cc
 * @author: Nasseef Abukamail
 *   @date: October 21, 2019
 *  @brief: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

/// function prototypes
double totalPay(const double salaries[], int numEmployees);
int search(const double salaries[], int numEmployees, double target);
bool isFound(const double salaries[], int numEmployees, double target);

int main(int argc, char const *argv[]) {
    double salaries[20] = {9, 10, 3, 15, 26, 23, 22, 17, 10, 5};
    int numEmployees = 10;
    double total = totalPay(salaries, numEmployees);
    cout << "Total pay: " << total << endl;
    double target = 555;
    cout << "Location " << search(salaries, numEmployees, target) << endl;
    return 0;
}  /// main

double totalPay(const double salaries[], int numEmployees) {
    double total = 0;
    for (int i = 0; i < numEmployees; i++) {
        total += salaries[i];
    }
    return total;
}

int search(const double salaries[], int numEmployees, double target){
    for (int i = 0; i < numEmployees; i++)
    {
        if(salaries[i] == target){
            return i;
        }
    }
    return -1;
}
bool isFound(const double salaries[], int numEmployees, double target){
    return search(salaries, numEmployees, target) >= 0;
    // if (search(salaries, numEmployees, target) >= 0)
    // {
    //     return true;
    // }
    // return false;
}