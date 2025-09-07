#include <iostream>
#include <vector>
using namespace std;
void getParmmutation(vector<int>arr, vector<int>ans, vector<vector<int>>& allperms, int i){
    if(i==arr.size()){
        allperms.push_back({ans});
        return;
    }

    //Include
    ans.push_back(arr[i]);
    getParmmutation(arr, ans, allperms, i+1);

    // backtrack
    ans.push_back(arr[i]);
    getParmmutation(arr, ans, allperms, i+1);
}

int main()
{
    vector<int>arr = {1, 2, 3};
    vector<int>ans;
    vector<vector<int>> allperms;

    getParmmutation(arr, ans, allperms, 0);

    for(int i=0; i<allperms.size()-1; i++){
        for(int j= 0; j<allperms.size()-1; j++){
            cout<< allperms[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}