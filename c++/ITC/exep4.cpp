//Name:- Pratham Bairagi
//Enrollment:- 24100BTCSE17813
#include <iostream>
#include <cmath>
using namespace std;
    int main(){
    int i;
    float p, it;
    p=0.5;
    for(i=1;i<=2;i++) { // 1st if 1 then 0, 2nd if 0 then 1
        it=p*(log(1/p))/log(2)+(1-p)*(log(1/(1-p)))/log(2);
        cout<<"Probability="<<p<<"	Capacity="<<it<<endl;
        }
    }
