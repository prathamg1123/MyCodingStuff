#include<iostream>
#include<vector>
using namespace std;
int BS(vector<int>arr,int tar,int st ,int end){
    if(st <= end){
        int mid = st + (end - st)/2;
        if (tar<arr[mid]){
            return BS(arr,tar,st,mid -1); 
        }
        else if (tar>arr[mid]){
            return BS(arr, tar, mid +1,end);
        }
        else return mid;
    }

    return -1;
}

int main()
{
    vector<int> arr = {2,3,5,6};
    int tar = 3;
    cout << BS(arr,tar,0,arr.size()-1);
    return 0;
}