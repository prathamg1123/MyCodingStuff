// Compute the sum of the series 1 - 2 + 3 - 4 + ... up to n terms using a loop. Ensure the sign alternates correctly.
#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    int sum =0;
    int temp = 0;
    
    for (int i =1;i<=n;i++){
        if (i%2 ==0){
            temp = -i;
           
        }
        else{
            temp = i;
        }
        sum = sum + temp;
    }
    cout << "Sum is: "<<sum;
    return 0;
}