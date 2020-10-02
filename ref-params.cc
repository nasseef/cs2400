/*
 *      Author: Nasseef Abukamail
 *   Date: September 28, 2020
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes
void findStats(double score1, double score2, double score3, 
           	double &total, double &average);

void printInstructions();           
int main() {

    double num1 = 8, num2 = 9, num3 = 12;

    double total = 1, average = 2;

	printInstructions();

    cout << "Total: " << total << " Average: " << average << endl;
    
    findStats(num1, num2, num3, total, average);
    
	cout << "Total: " << total << " Average: " << average << endl;
    return 0;
}
void printInstructions(){
	cout << "This program calculates the total and the average of three scores\n";
}

void findStats(double score1, double score2, double score3, 
           	double &total, double &average) 
{	
	total = (score1 + score2 + score3);	
	average = total / 3.0;
}	
