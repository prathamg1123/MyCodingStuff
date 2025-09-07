#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter no.: ";
    cin>>n;
    bool isprime = true;
    for (int i = 2;i*i<= n;i++){
        if(n%i == 0){
            isprime = false;
            break;
        }
    }
    if(isprime == true){
        cout<<n <<" is Prime:)";
    }else{
        cout <<n<<" is non prime:(";
    }
    

    return 0;}