#include<iostream>
using namespace std;

class A{
public:
    int a;
    A(){

    }

    A(){
        a = 10;
    }
};

class B: public A{
public:
};

class C: public A{
public:
};

class D: public B,public C{
public:
};

int main()
{
  A obj;
    cout<< obj.a;
 return 0;
}