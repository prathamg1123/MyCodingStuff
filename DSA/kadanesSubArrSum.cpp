#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n = 6;
    int arr[] = {3,-4,4,-1,7,-8};
    int maxsum = INT_MIN;
    int currsum = 0;
    for(int i = 0;i<n;i++){
        currsum += arr[i];
        maxsum = max(maxsum,currsum);
        if(currsum < 0){
            currsum = 0;
        }
    }
    cout << "Maximum subArray sum is: "<< maxsum;
    return 0;
}
