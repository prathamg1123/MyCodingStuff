#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int marks[6];
    int total;
    int tmax;

    //member function
    void assign(int name,int marks[6],int total,int tmax){
        this->name = name;
        this->marks[6] = marks[6];
        this->total = total;
        this->tmax = tmax;
    }


};
int main()
{
    Student obj1;
    obj1.name = "Yash";
    obj1.marks[1]= 1,2,3,4,5,6;
    
    return 0;
}