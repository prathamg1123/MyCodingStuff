#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    for(int i=0;i<n;i++){//outer loop for n lines
        for(int j= 1;j<=i+1;j++){//for first "*"
            cout <<" *";
        }
        for(int j = 0;j<(2*n - 2*i-2);j++){//for spaces
            cout <<"  ";
        }
        // if(i!=0)
        for(int j= 1;j<=i+1;j++){ //for second "*"
            cout <<" *";
        }
        cout <<endl;
    }

    for (int i= 0;i<n;i++){//outer for n lines
        for (int j = 0; j<n-i;j++){//for "*"
            cout<<" *";
        }
        for (int j = 0 ;j<i*2;j++){//for spaces
            cout<< "  ";
        }
        for (int j = 0; j<n-i;j++){//for "*"
            cout<<" *";
        }
    
         cout <<endl;
    }
    return 0;
    }
