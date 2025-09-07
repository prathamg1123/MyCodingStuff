#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector <int> ans;
        int st = 0,end = n-1;
        sort(nums.begin(),nums.end());

        while(st < end){
            int sum = nums[st] + nums[end];
            if(sum==target){
                ans.push_back(st);
                ans.push_back(end);
                return ans;
            }
            else if(sum > target){
                end--;
            }
            else{
                st++;
            }
        }
       
        return ans;
    }

int main()
{
    vector <int> nums = {1, 3, 2, 5, 7};
    int target = 9;
    vector<int> ans = twoSum(nums,target);

    for(int i = 0;i< ans.size(); i++){
        cout << ans[i] << " ";
    }

    
    return 0;
}