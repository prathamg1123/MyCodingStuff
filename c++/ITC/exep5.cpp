//Name:- Pratham Bairagi
//Enrollment:- 24100BTCSE17813
#include<iostream>
#include<cmath>
using namespace std;
    int main(){
        float p, Hp, C;
        p=0.1;
        //1st if 1 then 0,2nd if 0 then 1
        Hp = p*(log(1/p))/log(2)+ (1-p)*(log(1/(1-p)))/log(2);
        C = 1-Hp;
        cout<< "Probability of p=" << p<<" Binary Entropy Function of Hp=" << Hp << endl;
        cout<<"1-Hp-->Capacity="<<C<<endl;
    }