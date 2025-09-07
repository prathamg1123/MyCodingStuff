#include<iostream>
using namespace std;

int main()
{
   int n= 4;
   for (int i= 0;i<n;i++){//outer loop
    for(int j= 0;j<n-i-1;j++){//inner loop
        cout<<" ";//for spacing
    }
    for(int j =1;j<=i+1;j++){
        cout<<j;     //for first num
    }
    for(int j=i;j>=1;j--){
        cout<<j;// for second num
    }
    cout <<endl;
   }
        return 0;
}