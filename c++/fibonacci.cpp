#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    
    int n;
    cout <<"Enter n: ";
    cin>> n;
    int arr[n];
    for (int i = 0;i<=n;i++){
        cout<<fact(i) << "\t";
        arr[i] = fact(i);
    }
    cout << endl;
    for (int i = 0; i<n;i++){
        cout <<arr[i] << " ";
    }
    return 0;
}
int fact(int n){
    if (n==0)
    return 0;
    if (n==1)
    return 1;
    int factN = fact(n-1) +fact(n-2);
    return factN;
}