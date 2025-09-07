#include <iostream> // gcd / hcf (both are same) 
using namespace std; // Brute force

int main()
{
    int a = 28,b = 28;
    int gcd = 1;
    for (int i = 1; i<= min(a,b); i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    cout << gcd;
    return 0;
}