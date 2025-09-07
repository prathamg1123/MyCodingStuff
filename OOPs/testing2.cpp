#include<iostream>
using namespace std;

class A{
public:
    int age;
    int roll;

    A(){

    }
    A(int age,int roll){
       age = age;
      this->roll =roll;

    }

};
int main()
{
    //default
    A obj;
    obj.age =4;
    obj.roll = 5;

    //with constructor

    A obj2(2,5);

    cout << obj2.age <<endl;
    cout << obj2.roll <<endl;

    
    return 0;
}