//To find arr is sorted or not 
#include <iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>arr , int n){ //TC => O(n), SC => O(n);
    if(n == 0 || n==1){
        return true;
    }
   
    return arr[n-1] >= arr[n-2] && isSorted(arr,n-1);
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    int n = 5;
    cout << isSorted(arr,n);
    return 0;
}