#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    char ch = 'A';
    // cout <<"Enter no. of lines";
    // cin>>n;
    for(int i = 0; i<n;i++){ //Outer loop
        
        for(int j = 0 ;j<n;j++){ //Iner loop
            cout<<ch;
            ch++;
        }
        cout <<"\n";
    }

    return 0;
}