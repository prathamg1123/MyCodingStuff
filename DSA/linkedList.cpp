#include <iostream>
using namespace std;
//Linked list 
class Node{
public:
    int data; 
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){ //O(1)
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){ //O(1)
        if(head == NULL){
           cout << "List is Empty\n";
           return;
        } else {
            Node* temp = head;
            head = head->next;
            temp->next = NULL; //not neccesary
            delete temp;
        }
    }

    void pop_back(){ //O(n)
        if(head == NULL){
            cout << "LL is Empty!";
            return;
        }
        Node* temp = head;
        
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int pos){ //O(n)
        if(pos<0){
            cout << "Invalid Position!"<< endl;
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            if(temp == NULL){
                cout <<"Invalid Position"<<endl;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int key){ //O(n)
        Node* temp = head; 
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    void print(){ //O(n)
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data <<"->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    Node* reverse(){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return head = prev;
    }

    Node* middleNode(){
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node* CycleDetect(){
        Node* slow = head;
        Node* fast = head;
        bool isCycle = false;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                isCycle = true;
                break;
            }
        }    
        if(!isCycle) return NULL;
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }

    // void print1() {
    //     Node *temp = head;
    //     while(temp != NULL){
    //         cout << temp->data;
    //         temp = temp->next;
    //     }
    // }
};
int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);

    //ll.insert(9, 2);

    // ll.insert(3, 1);
   // ll.print();
    ll.push_front(5);
    // cout << ll.search(1);
    // ll.pop_front();
    // ll.pop_back();
    // 
    // Node* tempe = ll.middleNode();
    // cout << tempe->data<<"\n";
    Node* tt = ll.CycleDetect();
    cout << tt->data;
    // ll.print();


    return 0;
}