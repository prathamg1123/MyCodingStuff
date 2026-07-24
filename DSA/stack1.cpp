#include <iostream>
#include <list>
using namespace std;
class stack{
    list<int> ll;
public:

    void push(int val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
    }

    int top(){
        return ll.front();
    }
    bool isempty(){
        return ll.size() == 0;
    }

};

int main()
{
    // stack s;
    // s.push(10);
    // s.push(20);
    // s.push(30);

    // // cout << s.top()<< endl;
    // // s.pop();

    // // cout << s.top()<<endl;
    // // s.pop();

    // // cout << s.top()<<endl;
    // // s.pop();

    // // cout << s.top() << endl;

    // while(!s.isempty()){
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout<< "Empty!" << endl;
    int t = 4;

    for(int i=0; i<10; i++){
        cout<< i;
        if(i == t){
            break;
        }
    }
    
    return 0;
}