#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "student.h"

using namespace std;

int main() {
    Student s;
    cout << s << endl;
    cout << "Average: " << s.getAverage() << "(" << s.getGrade() << ")" << endl;

    s.setId(5);
    s.addScore(90);
    s.addScore(70);
    s.addScore(78);
    cout << s << endl;
    cout << "Average: " << s.getAverage() << "(" << s.getGrade() << ")" << endl;
    
    
    return 0;
}
