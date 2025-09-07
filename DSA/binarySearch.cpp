#include<iostream>
#include<vector>
using namespace std; // TC = O(logn)

int binarysearch(vector <int> arr,int tar){
    int st =0, end = arr.size()-1;
    while (st <= end){
        // int mid = (st+end)/2; // Not these
        int mid = st + (end - st)/2; // Do these

        if(tar>arr[mid]){
            st = mid +1;
        }
        else if(tar<arr[mid]){
            end = mid - 1;
        }
        else return mid;
    }
    return -1;
}

int main()
{
    vector <int> arr = {2,3,5,6};
    int tar = 2;
    cout << binarysearch(arr,tar);
    
    return 0;
}