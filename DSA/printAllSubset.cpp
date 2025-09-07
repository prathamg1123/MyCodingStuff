//Print all subset of arr
#include <iostream>
#include <vector>
using namespace std;
void PS(vector<int>&arr,vector<int>ans, int i){

    if(i==arr.size()){
        for(int val : ans){
            cout << val << " ";
        }
        cout <<endl;
        return ;
    }
    //include
    ans.push_back(arr[i]);
    PS(arr,ans,i+1);

    ans.pop_back(); //Backtracking

    //exclude
    PS(arr,ans,i+1);
    

}

int main()
{
    vector<int> arr = {1,2,3};
    vector<int> ans;
    PS(arr,ans,0);
    return 0;
}