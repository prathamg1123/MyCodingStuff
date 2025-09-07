#include <iostream>
using namespace std;

class student{
    public: //Access specifier
    
    string name;//members
    int roll;//members
    float cgpa;
    
    };
int main()
{
    student s1;
    cin>> s1.roll;
    s1.cgpa = 56;
    cout << s1.cgpa << endl;
    cout<< s1.roll;
    return 0;
}