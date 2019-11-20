/**
 *   @file: rectangle-main.cc
 * @author: Nasseef Abukamail
 *   @date: November 15, 2019
 *  @brief: Add Description
 */

#include <iostream>
#include "rectangle.h"

using namespace std;
///function prototypes

int main(int argc, char const *argv[]) {

    Rectangle r;
    //expect length = width = 0
    r.output();
    r.setLength(9);
    r.setWidth(6);
    r.output();
    Rectangle r2(20, 10);
    r2.output();
    Rectangle r3(22, 10);
    cout << r3 << endl;
    
    if (r2 == r3) //operator== (r2, r3)
    {   
        cout << "Equal" << endl;
    }
    else {
        cout << "Not Equal" << endl;
    }
    
    return 0;
}/// main
