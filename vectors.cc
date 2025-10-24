/**
 *   @file: vectors.cc
 * @author: Nasseef Abukamail
 *   @date: October 24, 2025
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;

///Constants and function prototypes
void printNumbers(vector<int> numbers);

vector<int> updateByOne(vector<int> &numbers);

int main(int argc, char const *argv[]) {
    vector<int> numbers;
    cout << numbers.empty() << endl;
    numbers.push_back(4);
    cout << numbers.empty() << endl;

    numbers.push_back(5);
    numbers.push_back(2);
    numbers.push_back(9);
    numbers.push_back(33);
    numbers.push_back(44);
    cout << "Vector Size = " << numbers.size() << endl;
    cout << "First element: " << numbers.front() << endl;
    cout << "Last element: " << numbers.back() << endl;


    numbers.pop_back();
    
    printNumbers(numbers);

    
    numbers.erase(numbers.begin() + 1);

    printNumbers(numbers);

    vector<int> updatedNumbers = updateByOne(numbers);
    
    printNumbers(updatedNumbers);
    
    updatedNumbers.insert(updatedNumbers.begin(), 99);
    
    printNumbers(updatedNumbers);

    vector<string> names = {"Susan", "Jim", "John", "Kate"};
    int lastIndex = names.at(0).length() - 1;

    cout << names.at(0).at(lastIndex) << endl;
    return 0;
} /// main

void printNumbers(vector<int> numbers){
    for (size_t i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << " ";
    }
    cout << endl;
    
}
vector<int> updateByOne(vector<int> &numbers){
    for (size_t i = 0; i < numbers.size(); i++)
    {
        numbers.at(i)++;
    }
    return numbers;
}
