#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector <int> vec = {6, 8, 0, 1, 3};
    //PS = {-1, 6, -1, 0, 1}
    //NG = {8, -1, 1, 3, -1}
    
    stack <int> s;
    vector <int> ans(vec.size(),0);

    for(int i = vec.size()-1; i>=0; i--){
        while(s.size()>0 && s.top() <= vec[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        } else {
            ans[i] = s.top();
        }
        s.push(vec[i]);
    }
    for(int val : ans){
     cout << val << " ";
    }
    return 0;
}
// do more of what brings you joy