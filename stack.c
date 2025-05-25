#include"stack.h"

int isFull(){
    if(top == MAX - 1)
        return 1;
    else
        return 0;

}

int isEmpty(){
    if (top == -1)
        return 1;
    else 
        return 0;
}

void push(int data){
    if(isFull()){
        printf("\nStack over flow");
        return;

    }
    top ++;
    stack_arr[top] = data;
}

int pop(){
    int value;
    if(isEmpty()){
        printf("\nStack Underflow.....!");
        exit(1);
    }
    value = stack_arr[top];
    top = top-1;
    return value;
}

int peek(){
    if(isEmpty()){
        printf("\nStack Underflow.....!");
        exit(1);
    }
    return stack_arr[top];
}

void print(){
    if(isEmpty()){
        printf("\nStack underflow...!");
        return;
    }
    for(int i = top ; i>=0 ; i--)
        printf("%d ",stack_arr[i]);
    printf("\n");
}
