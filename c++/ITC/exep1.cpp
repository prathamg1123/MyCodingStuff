#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i;
    float p,sum = 0,it;
    p = 0.05;
    for(i = 1; i<=5;i++){
        p = p + 0.05;
        it = p* (log(1/p))/ log(2);
        sum += it;
        cout << "Probability = " << p << " Entopy = "<< it <<endl;  
    }
    cout << "The all Entropy= " << sum << endl;
    cout<< "Nakshatra chalisgaonkar";
    cout << "24100BTCSE17780";
    return 0;
}