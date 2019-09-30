/*
 *        File: cube.cc
 *      Author: Nasseef Abukamail
 *        Date: September 30, 2019
 * Description: A program to demonstrate a value-returning functions
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes (Function Declaration)
int cube (int value);

int main()
{
	 int numberCubed, number = 2;
	 //function call with number as argument
	 numberCubed = cube(number);
	 cout  << "The cube of "
            << number << " is " << numberCubed << endl;
	
	cout << cube(3) << endl;
	int x = cube(4) * 2;
	cout << x << endl;

	 return 0;
}

//Function definition
// value is a formal parameter
int cube(int value) //Function heading
{ //body of the function
	 int result;    //local variable
	 result = value * value * value;
	 return result; //result returned to main

}


