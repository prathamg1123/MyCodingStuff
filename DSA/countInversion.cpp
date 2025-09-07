#include <iostream>
#include <vector>
using namespace std;

int countInversion(vector<int>arr, int st, int end){
    int count =0;
    for(int i=st; i<= end; i++){
        for(int j =i+1; j<=end; j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int>arr = {6, 3, 5, 2, 7};
    cout<<  countInversion(arr, 0, arr.size()-1);
    return 0;
}