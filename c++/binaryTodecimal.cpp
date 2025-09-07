#include<iostream>
using namespace std;
int binaryTodec(int binary){
    int ans = 0; int pow = 1;
    while (binary>0)
    {
        int rem =binary % 10;
        binary /= 10;
        ans += rem * pow;
        pow *= 2;
    }
    return ans;
    
}

int main()
{
    int binary = 1111;
       cout << binaryTodec(binary)<<endl;
    
    return 0;
}