// Peak index in mountain array
#include <iostream>
#include <vector>
using namespace std;
bool ispossible(vector<int> arr, int n, int m, int maxAllowedTime);
int minTimeToPaint(vector<int>arr,int n ,int m){
    int st = -1; // minimum time
    int end = 0;
    int ans = -1;
    for(int i = 0; i<n; i++){
        if(arr[i]>st){
            st = arr[i];
        }
        end += arr[i];

    }
    // range ( maximum length of arr -> sum of arr) i.e, range(st -> end)
    while (st <= end)
    {
        int mid = st + (end - st)/2;
        if(ispossible(arr,n,m,mid)){
            ans = mid;
            end--;
        } else {
            st++;
        }
    }
    return ans;
}

bool ispossible(vector<int> arr, int n, int m, int maxAllowedTime){
    int person = 1,time = 0;
    for(int i =0; i<n; i++){
        if(arr[i] + time <= maxAllowedTime){
            time += arr[i];
        } else {
            person++;
            time = arr[i];
        }
    }

    return person <= m;

}


int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << minTimeToPaint(arr,n,m);


    
    return 0;
}