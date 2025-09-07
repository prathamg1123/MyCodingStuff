// Search in 2-D matrix with TC = O(log m*n) 
#include <iostream>
#include<vector>
using namespace std;
bool searchInRow(vector<vector<int>> mat, int tar , int row){
    int n = mat[0].size();
    int st = 0, end = n-1;
    while(st <= end){
        int mid = st +(end - st)/2;

        if(mat[row][mid] == tar) {
            return true;
        }
        else if(mat[row][mid] > tar){
            end = mid -1;
        }
        else{
            st = mid + 1;
        }
    } 
    return false;
}

bool searchMatrix(vector<vector<int>> mat , int tar){
    int m = mat.size();
    int n =mat[0].size();

    int st = 0, end = m-1;

    while(st <= end){
        int mid = st + (end - st)/2;
        if(tar >= mat[mid][0] && tar <= mat[mid][n-1]){
            //found right row of target
            return searchInRow(mat, tar, mid);
        }
        else if(tar > mat[mid][n-1]){
            st = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return false;
}

int main()
{
    int target = 3;
    vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
   
    cout << searchMatrix(mat , target);

//     class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         vector <int> ans;
        
//         for(int i =0; i<n; i++){
//             for(int j =i+1; j<n; j++){
//                 if(target == (nums[i] + nums[j])){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//                 }
//             }
//         }
//         return ans;
//     }
// };

    return 0;
}