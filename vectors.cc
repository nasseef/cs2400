/**
 *   @file: vectors.cc
 * @author: Nasseef Abukamail
 *   @date: October 29, 2021
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
    int arr[] = {1, 2, 3};
    vector <double> nums; 
    vector <int> numbers(5, 0); //creates 5 elements
    vector <string> names2(5, ""); //creates 5 strings ""

    cout << "size = " << nums.size() << endl;

    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);
    nums.pop_back();
    cout << "size = " << nums.size() << endl;
    
    for (size_t i = 0; i < 3; i++)
    {
        nums.push_back(i * i);
    }





    nums.at(2) = 70;
    nums[3] = 90;
    printVector(nums);

    
    nums.insert(nums.begin() + 2, 60);

    nums.erase(nums.begin() + 1);
    cout << "First element: " << nums.at(1) << endl;
    double total = getTotal(nums);
    cout << "Total: " << total << endl;
    /*add code*/
    vector <string> names;
    names.push_back("Bob");
    cout << "First name: " << names.front() << endl;

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
