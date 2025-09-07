#include <iostream>
using namespace std;
int prime(int n){
    if (n<=1)
    return 0;
    for (int i = 2; i<n;i++){
        if (n%i == 0){
            
            return 0;
        }
    }
    return n;
}
int main(){
    int n = 15;
    for (int i = 2; i<= n;i++){
        int result = prime(i);
        if (result != 0){
            cout <<result <<" ";
        }
    }
    
    return 0;
}