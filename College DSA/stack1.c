#include<stdio.h>
#include<stdlib.h>
struct stack{
    int arr[5];
    int tos;
};

void push(struct stack * p, int x){
    if(p->tos == 4){
        printf("Stack is Overflow\n");
        return;
    }
    p->tos++;
    p->arr[p->tos] = x;
    printf("Pushed %d in stack\n",x);
}

int pop(struct stack* p){
    if(p->tos == -1){
        printf("Stack is Underflow\n");
        return 0;
    }
    p->tos--;
    return p->arr[p->tos+1];
}

int main(){
    struct stack s;
    s.tos = -1;
    int i , x;
    for(i = 1; i<= 6;i++){
        printf("Enter Element: ");
        scanf("%d",&x);
        push(&s, x);
    }
    for(i = 1; i<= 6;i++){
        x = pop(&s);
        if(x != 0){
            printf("Poped element is %d\n", x);
        }
    }
    return 0;
}