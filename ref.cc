/**
 *   @file: ref.cc
 * @author: Nasseef Abukamail
 *   @date: February 26, 2021
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

///Constants and function prototypes
void swap(int &num1, int &num2);

int main(int argc, char const *argv[]) {

    int first = 10, second = 99;	

	cout << "Before swap" << endl;	
	cout << "first = " << first;
	cout << ", second = " << second << endl;	
	
	swap(first, second);  //function call
	
	cout << "After swap" << endl;	
	cout << "first = " << first;	
	cout << ", second = " << second << endl;

    
    return 0;
} /// main

//returns multiple values through reference parameters
void swap(int &num1, int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}