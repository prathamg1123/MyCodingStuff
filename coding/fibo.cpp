#include<iostream>
using namespace std;
int fab(int n);
int main()
{

    int n;
    cout <<"Enter n: ";
    cin>> n;
    int arr[n];
    for (int i = 0;i<=n;i++){
        int temp = fab(i);
        arr[i] = temp;
        cout<<temp << " ";
        
    }
    cout<<endl;
    return 0;
}
int fab(int n){
    if (n==0)
    return 0;
    if (n==1)
    return 1;
    int factN = fab(n-1) +fab(n-2);
    return factN;
}
