#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout << "Initial size of vec = " << vec.size() << endl;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    vec.pop_back();

    cout << "After size of vec = " << vec.size() << endl;
    for (int val: vec){ //for each loop
        cout <<val<<endl;
    }
    cout << vec.size();
    cout << vec.at(0);
    
    return 0;
}