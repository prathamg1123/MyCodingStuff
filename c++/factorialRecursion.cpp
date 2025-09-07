#include<iostream>
using namespace std;
int fact(int n);

int main()
{
    int n = 6;
    cout << fact(n);
    return 0;
}
int fact(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int factN = n * fact (n-1);
    return factN;

}