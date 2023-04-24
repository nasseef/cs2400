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
void fillVector(vector<int> &randomNumbers, int count);

int main(int argc, char const *argv[]) {

    // int x = 2;
    // string y;

    // y = x % 2 == 0 ? "yes" : "no";
    // if (x % 2 == 0)
    // {
    //     y = "yes";
    // }
    // else {
    //     y = "no";
    // }
    

    srand(time(nullptr));
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
    //erase the first 3 elements
    nums.erase(nums.begin(), nums.begin() + 3);

    cout << "Second element: " << nums.at(1) << endl;
    double total = getTotal(nums);
    cout << "Total: " << total << endl;
    /*add code*/
    vector <string> names;
    names.push_back("Sue");
    names.push_back("Jack");
    names.push_back("Janet");

    cout << "Initial " << names.at(0).at(0) << endl;

    cout << "First name: " << names.front() << endl;
    cout << "Last name: " << names.back() << endl;

    vector <string> phones(5, "(000)000-0000"); //creates 5 initialized strings

    vector<int> randomNumbers;
    fillVector(randomNumbers, 10);
    for (size_t i = 0; i < 10; i++)
    {
        cout << randomNumbers.at(i) << " ";
    }
    cout << endl;
    return 0;
}/// main

void printVector(vector <double> v){
    // for (auto i = 0; i < v.size(); i++)
    // {
    //     cout << v.at(i) << " ";
    // }

    for (auto element : v)
    {
        cout << element;
    }
    
    cout << endl;
}


double getTotal(const vector<double> &v) {
	double total = 0;
	for(size_t i = 0; i < v.size(); i++){
		total += v.at(i);
	}
	return total;
}

void fillVector(vector<int> &randomNumbers, int count){
    for (size_t i = 0; i < count; i++)
    {
        int x = rand() % 6 + 1;
        randomNumbers.push_back(x);
    }
    
}
