#include <iostream> // TC = O(nlog(n)) ; SC = O(n);
#include <vector>
using namespace std;
void merge(vector<int>&arr, int st, int mid, int end){// O(n)
    vector<int> temp;
    int i = st;
    int j = mid+1;
    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){ // remaining element of left half array
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=end){ // remaining element of right half array
        temp.push_back(arr[j]);
        j++; 
    }

    //To push all sorted element from temp to original arr
    for(int idx=0; idx < temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
    
}

void mergesort(vector<int>&arr, int st, int end){
    if(st<end){

    int mid = st + (end-st)/2;
    mergesort(arr, st, mid); // left half part

    mergesort(arr, mid+1, end);// right half part

    merge(arr, st, mid, end);
    } 
    
}

int main()
{
    vector<int>arr= {34, 22, 12, 56, 76, 83};
    int st = 0, end = arr.size()-1;
    mergesort(arr, st, end);
    for(int val: arr){
        cout<< val << " ";
    }

    return 0;
}