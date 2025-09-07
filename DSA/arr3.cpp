// binary Search with recursion
#include <iostream>
#include<vector>
using namespace std;
int BS(vector<int>arr ,int tar,int st, int end){
    if(st>end) return -1;
    int mid = st + (end -st)/2;
    if(arr[mid] == tar) return mid;
    else if(arr[mid] > tar) return BS(arr,tar,st ,mid-1);
    else if(arr[mid] < tar) return BS(arr, tar, mid+1,end); 
    
    return -1;
}

int main()
{
    vector<int> arr = {1,2,3,4,5};

    int st = 0; int end = arr.size()-1;
    int tar =4;
    cout << BS(arr, tar, st, end);
    return 0;
}