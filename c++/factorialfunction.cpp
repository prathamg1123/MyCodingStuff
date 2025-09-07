#include<iostream>
using namespace std;

    int fact(int n){
        int factN= 1;
        for (int i=1 ;i<=n;i++){
            factN *= i;
        }
        return factN;
    }

   
int main()
{
    
    cout << fact(5)<< endl;
    return 0;
}