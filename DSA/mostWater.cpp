// Container with most water Brute force
// optimum approach is in leet
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int maxwater = 0,area;

    for(int i = 0;i<height.size();i++){
        for(int j=i+1;j<height.size();j++){
            int w = j-i;
            int ht = min(height[i],height[j]);
            area = w * ht;
            maxwater = max(maxwater,area);
        }
    }
    cout<< maxwater;
    return 0;
}