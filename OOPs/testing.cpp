#include <iostream>
using namespace std;
class A{
public: 
    int a;
    int b;
    int sum (int a,int b){
        return a+b;
    }
};

class B :virtual public A{
public:
    int sum (int a,int b){
    return a*b;
}
    
};

int main()
{
    A s1;
    cout<< s1.sum(4,5)<< endl;

    B s2;
    cout<<s2.sum(4,5);

    
    return 0;
}