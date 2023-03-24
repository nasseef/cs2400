/**
 *   @file: vectors.cc
 * @author: Nasseef Abukamail
 *   @date: March 24, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;

///function prototypes
void printVector(vector <double> v);
double getTotal(const vector<double> &v);


int main(int argc, char const *argv[]) {
    vector <double> nums; //empty

    vector <int> numbers(5, 99); //creates 5 elements

    cout << "nums size: " << nums.size() << endl;
    cout << "numbers size: " << numbers.size() << endl;

    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);
    nums.pop_back();
    cout << "nums size:  " << nums.size() << endl;
    
    for (size_t i = 0; i < 3; i++){
        nums.push_back(i * i);
    }

    nums.at(2) = 70;
    nums[3] = 90;
    cout << "All values in nums: " << endl;
    printVector(nums);

    //insert 60 at position 2
    nums.insert(nums.begin() + 2, 60);

    //remove the second value in nums
    nums.erase(nums.begin() + 1);
    cout << "Second element: " << nums.at(1) << endl;
    double total = getTotal(nums);
    cout << "Total: " << total << endl;
    /*add code*/
    vector <string> names;
    names.push_back("Sue");
    names.push_back("Jack");
    names.push_back("Janet");
    cout << "First name: " << names.front() << endl;
    cout << "Last name: " << names.back() << endl;

    vector <string> phones(5, "(000)000-0000"); //creates 5 initialized strings
    return 0;
}/// main

void printVector(vector <double> v){
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }
    
}


double getTotal(const vector<double> &v) {
	double total = 0;
	for(size_t i = 0; i < v.size(); i++){
		total += v.at(i);
	}
	return total;
}
