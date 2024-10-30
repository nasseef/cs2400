/*
 * @author: Nasseef Abukamail
 *   @date: October 24, 2024
 *  @brief: Example to demonstrate string built-in functions
 */
#include <iostream>
#include <cstdlib>
#include <iomanip>


using namespace std;

//function prototypes

int main()
{
	string line1 = "Ohio U. Athens, Ohio";
	string line2 = " EECS Department";
	
	string line3 = line1 + line2;
	cout << line3 << endl;
	
	cout <<"line 1 length: " << line3.length() << endl;
	int location = line1.find("Ohio");

	//if not found returns string::npos
	cout << "Ohio is located at position " << location << endl;
	location = line1.find("Ohio", location + 4);
	if (location == string::npos)
	{
		cout << "Ohio not found" << endl;
	}
	cout << "The second Ohio is at position " << location << endl;
	

	//line1 = "Ohio U. Athens, Ohio.";
	line1.replace(location, 4, "OH");
	cout << line1 << endl; 
	line1.erase(location, 2);
	cout << line1 << endl;

	line1.insert(location, "OHIO");
	cout << line1 << endl;
	
	
	string line4 = line1.substr(location, 4);
	cout << line4 << endl;


	string s = to_string(981);
	cout << "The second digit character in 981 is " << s.at(1) << endl;

	string doubleString = "123.567";
	double value = stod(doubleString);
	cout << fixed << setprecision(2) << "The double number is " << value << endl;
	return 0; //or EXIT_SUCCESS
}
