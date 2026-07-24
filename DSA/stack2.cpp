#include<iostream>
#include<stack>
#include<vector>
using namespace std;
// Span calculation of a stock 
int main(){
    vector<int>price = {100, 80, 60, 70, 60, 75, 85};

    stack<int> s;
    vector<int>ans(price.size(),0);

    for(int i = 0; i< price.size(); i++){
        while(s.size()>0 && price[s.top()] <= price[i]){ //rempving 
            s.pop();
        }
        if(s.empty()){
            ans[i] = i+1;
        }else {
            ans[i] = i-s.top();
        }
        s.push(i);
    }

    for(int val: ans){
        cout<< val << " ";
    }
    cout<<endl;
    return 0;
}