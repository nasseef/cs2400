/**
 *   @file: rectangle-main.cc
 * @author: Nasseef Abukamail
 *   @date: April 14, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include "rectangle.h"

using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {

    Rectangle r(10, 5);
    Rectangle r2(20, 5);
    // if (equal(r, r2))
    // {   
    //    cout << "Equal" << endl;
    // }
    // else {
    //     cout << "Not equal" << endl;
    // }
    if (r == r2)
    {   
       cout << "Equal" << endl;
    }
    else {
        cout << "Not equal" << endl;
    }
    
    
    // ofstream out("data.out");
    r.output(cout);
    cout << endl;
    // out.close();
    cout << r.area() << endl;
    return 0;
} /// main



