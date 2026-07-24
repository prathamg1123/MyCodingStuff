#include<stdio.h>

struct Cqueue{
    int arr[5];
    int front;
    int rear;
};

void insert(struct Cqueue*, int);
int delete(struct Cqueue*);
int main(){
    struct Cqueue Q;
    Q.front = Q.rear = -1;
    int i , x;

    for(i=1; i<=6; i++){
        printf("Enter element: ");
        scanf("%d", &x);
        insert(&Q, x);
    }

    for(i=1; i<=6; i++){
        int x = delete(&Q);
        if(x != -1){
            printf("\nDeleted ele = %d", x);
        }
    }
    return 0;
}

void insert(struct Cqueue* Q, int x){
    if(( Q->rear == 4 && Q->front == 0) || (Q->rear + 1 == Q->front)){
        printf("Queue Overflow!\n");
        return;
    }

    if(Q->rear == -1){ // first Element
        Q->rear = Q->front = 0;
    } else if(Q->rear == 4){ // rear at last index(last element)
        Q->rear = 0;
    } else {
        Q->rear++;
    }

    Q->arr[Q->rear] = x;
}

int delete(struct Cqueue * Q){
    int x;
    if(Q->front == -1){
        printf("\nQueue is underFlow!\n");
        return -1;
    }
    x = Q->arr[Q->front];
    if(Q->front == Q->rear){ //single element
        Q->front = Q->rear = -1;
    }
    else if(Q->front == 4){ // last element
        Q->front = 0;
    } else {
        Q->front++;
    }
    return x;
}