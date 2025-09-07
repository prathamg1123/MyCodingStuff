#include<iostream>
using namespace std;

    int fact(int n){
        int factN= 1;
        for (int i=1 ;i<=n;i++){
            factN *= i;
        }
        return factN;
    }

    int nCr(int n,int r){
        int ans = fact(n)/(fact(r) * fact(n-r));
    }
int main()
{
    int n= 8;
    int r = 2;
    cout << nCr(n,r)<< endl;
    return 0;
}