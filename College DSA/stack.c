#include <stdio.h>
#include <stdlib.h>
struct stack {
    int size;
    int top;
    int *arr;
};

void push(struct stack *ps, int value){
    if(ps->size == ps->top+1){
        printf("Stack is Overflow!\n");
        return;
    }
    ps->top++;
    ps->arr[ps->top] = value;
    printf("Element %d is Pushed into the stack\n", value);
}

int pop(struct stack *ps){
    if(ps->top == -1){
        printf("Stack is Underflow");
        return -1;
    }
    // printf("Element %d is Poped\n",ps->arr[ps->top]);
    ps->top--;
    return ps->arr[ps->top + 1];
}

int peek (struct stack *ps){
    if(ps->top == -1){
        printf("Stack is Underflow");
        return -1;
    } else if(ps->size == ps->top+1){
        printf("Stack is Overflow!\n");
        return -1;
    }
    return ps->arr[ps->top];
}

int main(){
    struct stack * s = (struct stack*) malloc(sizeof(struct stack));
    s->size = 3;
    s->top = -1;
    s->arr = (int*) malloc(s->size * sizeof(int));
    push(s,10);
    push(s,20);
    push(s,30);
    push(s,40);
    printf("Element %d is Poped\n", pop(s));
    printf("Element %d is Poped\n", pop(s));
    printf("Element %d is Poped\n", pop(s));
    printf("Element %d is Poped\n", pop(s));
    pop(s);
    pop(s);
    pop(s);
  
    printf("%d",peek(s));

    return 0;
}