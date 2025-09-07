#include <iostream>
using namespace std;

int main()
{
    int n = 7528;
    int revNo = 0;

    while(n!=0){
        int temp = 0;
        temp = n%10;
        revNo = (revNo *10) + temp;
        n/=10;
    }
    cout << revNo;
    return 0;
}