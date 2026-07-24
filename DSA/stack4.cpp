//largest rectangle in histoigram
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector<int> vec = {2, 1, 5, 6, 2, 3};
    //rs = {1, -1, 4, 4, -1, -1} (idx)
    //ls = {-1, -1, 1, 2, 1, 4}  (idx)
    vector <int> rsmall(vec.size(), 0); // right smaller nearest
    vector <int> lsmall(vec.size(), 0); // left smaller nearest

    stack <int> s1;
    stack <int> s2;
    int maxArea;
    for(int i = vec.size()-1; i>=0; i--){
        while(s1.size() > 0 && vec[s1.top()] >= vec[i]){
            s1.pop();
        }
        if(s1.empty()){
            rsmall[i] = -1;
        } else {
            rsmall[i] = s1.top();
        }
        s1.push(i);
    }


    for(int i = 0; i<vec.size(); i++){
        while(s2.size() > 0 && vec[s2.top()] >= vec[i]){
            s2.pop();
        }
        if(s2.empty()){
            lsmall[i] = -1;
        } else {
            lsmall[i] = s2.top();
        }
        s2.push(i);
    }

    for(int i = 0; i< vec.size(); i++){
        int currArea = vec[i] * (rsmall[i] - lsmall[i] -1);
        maxArea = max(currArea, maxArea);
    }

    cout<< maxArea << endl;  
    
    return 0;
}