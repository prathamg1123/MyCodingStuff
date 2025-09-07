// Brute force for finding Majority element
#include <iostream>
#include <vector>
#include<climits>
#include<array>
using namespace std;
int majorEle(vector<int> nums){
    int n = nums.size();
    for(int val: nums){
        int freq = 0;
        for(int el: nums){
            if(val == el){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
        return -1;
    }
}

int main()
{
    vector<int>nums = {1,2,2,1,1};
    int ans = majorEle(nums);
   cout << ans<< endl;

    return 0;
}         