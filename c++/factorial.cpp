#include <iostream>
using namespace std;
int facto(int n);

int main (){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<facto(n);
    return 0;
}
int facto(int n){
    if(n==1){
        return 1;
    }
    int fact = n * facto(n-1);
    return fact;
}