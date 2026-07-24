#include <iostream>
using namespace std;
class cqueue{
    int *arr;
    int cap , currSize;
    int f, r;
public:
    cqueue(int size){
        cap = size;
        arr = new int[cap];
        currSize = 0;
        f = 0;
        r = -1;
    }

    void push(int data){
        if(currSize == cap){
            cout<< "Circular Queue is full! " << endl;
            return;
        }
        r = (r+1)%cap;
        arr[r] = data;
        currSize++;
    }

    void pop(){
        if(empty()){
            cout<< "Circular Queue is empty! " << endl;
            return;
        }
        f = (f+1)%cap;
        currSize--;
    }
    int front(){
        if(empty()){
            cout<< "Circular Queue is empty! " << endl;
            return -1;
        }
        return arr[f];
    }

    bool empty(){
       return currSize == 0;
    }

    void print(){
        for(int i = 0; i<cap; i++){
        cout<< arr[i] << " ";
        }
        cout << endl;
        
    }

};
int main()
{
    cqueue cq(4);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.pop();
    cq.push(9); 
    while(!cq.empty()){
        cout<< cq.front() << " ";
        cq.pop();
    }
    cout<<endl;
    // cq.push(5);

    cq.print();
  
    // cout<< 1%4;
    return 0;
}


