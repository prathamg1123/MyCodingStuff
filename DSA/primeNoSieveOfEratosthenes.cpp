#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 100;
    vector<bool> isprime(100,true);
    int ans = 0;
    for(int i =2; i<n; i++){
        if(isprime[i] == true){
            ans++;
            for(int j = i*2; j<n; j = i+j){
                isprime[j] = false;
            }
        }

    }
    cout << ans;
    return 0;
}