// Better approach using sorting
// Optimal is on leet
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int majorEle(vector<int> nums){
    int n = nums.size();
    int freq = 1;
    int ans = nums[0];
    sort(nums.begin(),nums.end());
    
    for(int i = 1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        } else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
        
        
    }
    return -1;
}

int main()
{
    vector<int>nums = {1,2,2,1,1};
    int ans = majorEle(nums);
    cout << ans<< endl;


    return 0;
}
