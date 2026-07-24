#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; 
    struct Node* next;
};

void append(struct Node** ps, int x){
    struct Node* p, *temp;
    
    p = (struct Node*) malloc(sizeof(struct Node));
    p->data = x;
    p->next = NULL;
    if(*(ps) == NULL){
        *ps = p;
        return;
    }
    temp = *(ps);
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = p;
}



void display(struct Node* p){
    if(p == NULL){
        printf("LL is empty");
        return;
    }
    struct Node* temp;
        temp = p;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
}

int searchNode(struct Node* p, int x){
    int pos = 0;
    if(p == NULL){
        return pos;
    }
    while(p != NULL){
        pos++;
        if(p->data == x){
            return pos;
        }
        p = p->next;
    }

    return -1;
}

void delFirst(struct Node** ps){
    struct Node* temp;
    if(*ps == NULL){
        printf("ll is empty");
        return;
    }
    if((*ps)->next == NULL){ // only one node
        free(*ps);
        *ps = NULL;
        return;
    }
    temp = *ps;
    *ps = temp->next;
    free(temp);
}

void delLast(struct Node** ps){
    struct Node* temp;
    if(*ps == NULL){
        printf("ll is empty");
        return;
    }
    if((*ps)->next == NULL){ // only one node
        free(*ps);
        *ps = NULL;
        return;
    }
    temp = *ps;

    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void delAny(struct Node** ps, int x){
    struct Node *temp , *prev;
    if(*(ps) == NULL){
        printf("LL is empty");
        return;
    }

    
    if((*ps)->data == x){  // 1st node
        temp = *ps;
        *ps = temp->next;
        free(temp);
        return;
    }
    temp = *ps;

    while(temp != NULL && temp->data != x){
        prev = temp;
        temp = temp->next;
    }
        if(temp == NULL){
            printf("no data found");
        }
         else{
            prev->next  = temp->next;
            free(temp);
        }
    }

void insertAfter(struct Node ** ps, int x, int key){
    struct Node* p , *temp;
    p = (struct Node*) malloc(sizeof(struct Node));
    p->data = x;
    p->next = NULL;
    temp = *ps;
    while(temp != NULL && temp->data != key){
        temp = temp->next;
    }
    if(temp ==  NULL){
        printf("Key not found");
        return;
    }
  
    p->next = temp->next;
    temp->next = p;
}



int main(){
    struct Node* start = NULL;
    append(&start, 10);
    append(&start, 20);
    append(&start, 30);
    append(&start, 40);

    insertAfter(&start, 50, 30);
    display(start);
    
    
    // display(start);

    

  
    return 0;
}