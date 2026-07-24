#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector <int> vec = {3,1,0,8,6};
    stack <int> s;
    vector <int> ans(vec.size(), 0);
    //PS = {-1, 6, -1, 0, 1}

    for(int i = 0; i< vec.size(); i++){
        while(s.size() > 0 && s.top() >= vec[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        } else {
            ans[i] = s.top();
        }
        s.push(vec[i]);
    }

    for(int val: ans){
        cout<< val << " ";
    }

}