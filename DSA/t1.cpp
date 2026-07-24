#include <iostream>
#include<unordered_map>
#include<queue>
using namespace std;

// int firstUniqChar(string s) {
//         unordered_map <char, int> m;
//         queue <int> Q;
//         for(int i =0; i< s.size(); i++){
//             if(m.find(s[i]) == m.end()){
//                 Q.push[i];
//             }
//             m[s[i]]++;
//         }
        
//     }

int main()
{
    // char ch[] ={'a', 'b', 'c'}; 
    
    // cout << ch;

    // unordered_map <char, int> m;

    cout << max(5, 6);

    
    
    return 0;
}


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector <int> ans;
        int currMax = INT_MIN;
        int freq = 0;
        int idx = 0;
        for(int i = 0; i< nums.size()-k+1; i++){
            while(freq != k){
                currMax = max(currMax, nums[idx]);
                freq++; idx++;
            }
            idx = i+1;
            ans.push_back(currMax);
            currMax = INT_MIN;
            freq = 0;
        }
        return ans;
    }
};
