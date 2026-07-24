#include <iostream>
using namespace std;
//Circular Linked list 
class Node{
public:
    int data; 
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircularList {
    Node* head;
    Node* tail;
public:
    CircularList(){
        head = NULL;
        tail = NULL;
    }

    void InserAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode->next = head; 
            tail->next = newNode;
            head = newNode;
        }
    }
    void InsertAtTail(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        } else {
            tail->next = newNode;
            newNode->next = head;
            tail = tail->next;
        }
    }
    
    void deleteAtHead(){
        if(head == NULL){
            cout << "Circular LinkedList is empty!" << endl;
        } else if (head == tail){
            delete(head);
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete(temp);
        }

    }
    void deleteAtTail(){
        if(head == NULL){
            cout << "Circular LinkedList is empty!" << endl;
        } else if (head == tail){
            delete(head);
            head = tail = NULL;
        } else {
            Node* temp = tail; 
            Node* prev = head;// for finding previos node of tail
            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;

            temp->next = NULL;
            delete(temp);
        }
    }
    
    // void print(){
    //     if(head == NULL){
    //         cout << "Circular LinkedList is empty! ";
    //         return;
    //     }
    //     cout<< head->data << " -> ";
    //     Node* temp = head->next;
    //     while(temp != head){
    //         cout << temp->data << " -> ";
    //         temp = temp->next;
    //     }
    //     cout<< temp->data;
    // }
    
    void print(){
        if(head == NULL){
            cout << "Circular LinkedList is empty!" << endl;
        }

        Node* temp = head;
        do {
            cout << temp->data << "->";
            temp = temp->next;
        } while(temp != head);
        cout<< temp->data << endl;
    }
};

int main(){
    CircularList cll;
    cll.InserAtHead(5);
    cll.InserAtHead(4);
    cll.InserAtHead(3);
    cll.InserAtHead(2);
    cll.InserAtHead(1);

    // cll.deleteAtTail();
    // cll.deleteAtTail();
     

    cll.print();
    return 0 ;
}