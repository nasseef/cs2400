/**
 *   @file: wages.cc
 * @author: Nasseef Abukamail
 *   @date: May 11, 2020
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///function prototypes

int main(int argc, char const *argv[]) {

    //1. Declare variables
    double hours, rate, pay;

    //2. Input the values
    cout << "Enter the hourly rate: ";
    cin >> rate;

    //rate must be between 10 and 30
    if(rate < 10 || rate > 30){
        cout << "Error: rate must be between 10 and 30" << endl;
        exit(0);
    }

    cout << "Enter the number of hours: ";
    cin >> hours;

    //Hours must be between 0 and 70
    if(hours < 0 || hours > 70){
        cout << "Error: number of hours must be between 0 and 70" << endl;
        exit(0);
    }

    //3. Calculate the pay

    //Check for Overtime
    if (hours > 40){    //calculate regular + overtime pay
        double overtime = (hours - 40) * rate * 1.5;
        pay = 40 * rate + overtime;
    }
    else {  //regular time only
        pay = hours * rate;

    }

    //4. Display/output the pay
    cout << setprecision(2) << fixed;
    cout << "Your weekly pay is $" << pay << endl;
    return 0;
}/// main