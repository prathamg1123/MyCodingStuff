#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int front;
    int rear;
    int arr[5];
};
void insert(struct Queue*, int x);
int del(struct Queue*);

int main (){
    struct Queue Q;
    int x , i;
    Q.front = 0;
    Q.rear = -1;
    for(i = 1; i<= 6; i++){
        printf("Enter element: ");
        scanf("%d", &x);
        insert(&Q, x);
    }

    for(i = 1; i<= 6; i++){
        int x = del(&Q);
        if(x != -1){
            printf("\n%d is deleted", x);
        }
    }
    return 0;
}

void insert(struct Queue * p, int x){
    if(p->rear== 4){
        printf("Queue Overflow");
        return;
    }
    p->rear++;
    p->arr[p->rear] = x;
    printf("%d is Inserted\n",x);
}

int del(struct Queue*p){
    int x;
    if(p->front > p->rear){
        printf("\nQueue Underflow");
        return -1;
    }
    x = p->arr[p->front];
    p->front = p->front+1;
    return x;
}