#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void print(){
        Node* temp = head;
        if(temp == NULL){
            cout << "LL is empty"<<endl;
        }
        while(temp != NULL){
            cout << temp->data <<"->";
            temp = temp->next;
        }
        cout<< "NULL";
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop_front(){
        if(head == NULL){
            cout << "LL is empty!"<< endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "LL is empty!"<< endl;
            return;
        }

        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        temp->next = NULL;
        tail = temp;
    }

    void insert(int val, int pos){
        if(pos<0){
            cout<<"Invalid!";
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0; i<pos-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int key){
        if(head == NULL){
            cout<<"LL is Empty";
            return 0;
        }

        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
                                                                                                                               
        }
        return -1;
    }

    void reverse(){
        Node* prev;
        Node* curr;
        Node* next;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        print();
    }
};

int main(){
    List l;
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);

   // l.push_back(4);

    // l.pop_front();
   // l.pop_back();
    l.reverse();
   // l.print();
}
