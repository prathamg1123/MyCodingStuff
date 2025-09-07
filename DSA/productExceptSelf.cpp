// productExceptSelf Brute force
// optimum approach is in leet
#include<iostream>
#include<vector>
using namespace std;
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n,1);
       
        for (int i = 0; i<n;i++){
            for(int j =0; j<n; j++){
                if (j != i){
                    answer[i] *= nums[j];
                }
            }
        }
            return answer;
        
    }


int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> ans(n,1);
    ans = productExceptSelf(nums);

    for(int val: ans){
        cout << val << " ";
    }
    

   
    return 0;
}
