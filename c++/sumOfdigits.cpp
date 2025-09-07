#include<iostream>
using namespace std;

int sumOfdigit(int n){
    int digit = 0;
    while (n>0){
        int  lastdigit = n%10;
        n /= 10;
        digit += lastdigit;
        
    }
    return digit;
}
int main()
{
    cout<<sumOfdigit(23);
    return 0;
}