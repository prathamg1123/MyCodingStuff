#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
bool isArmstrong(int n){
    int copyN = n;
    int sum = 0;

    while (n!=0){
        int digit = n%10;
        sum += (digit*digit*digit);
        n /= 10;
    }
    return copyN == sum;
}

int main()
{
    int n = 153;
    if(isArmstrong(n)){
        cout << "It is Armstrong no.";
    }
    else{
        cout << "Not";
    }
    
    return 0;
}