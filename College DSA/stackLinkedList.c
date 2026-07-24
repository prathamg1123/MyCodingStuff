//stack with Linked list
#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *node;
};

void push(struct stack* p, int x, int tos){
    struct stack * newNode = (struct stack*) malloc(sizeof(struct stack));
    int temp = p->node;
}

int main(){
    struct stack *s = (struct stack*) malloc(sizeof(struct stack));
    s->node = -1;
    push(&s, 10, tos);

    return 0;
}