/**
 *   @file: sales-tax.cc
 * @author: Nasseef Abukamail
 *   @date: September 15, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
const double OH_RATE = .07;
const double WV_RATE = .06;
const double KY_RATE = .05;
const double DEFAULT_RATE = 0.0;

int main(int argc, char const *argv[]) {

    double taxRate = DEFAULT_RATE;
    string state;
    cout << "Enter the state: ";
    cin >> state;
  
    if (state == "OH" || state == "Ohio")
    {
        taxRate = OH_RATE;
    }
    else if (state == "WV" || state == "West Virginia"){
        taxRate = WV_RATE;
    }
    else if (state == "KY" || state == "Kentucky"){
        taxRate = KY_RATE;
    }
    // else {
    //     taxRate = DEFAULT_RATE;
    // }
    
    cout << "The tax rate for " << state << " is " << taxRate << endl;

    return 0;
} /// main