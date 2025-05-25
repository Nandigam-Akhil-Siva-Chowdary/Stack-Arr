#include<stdio.h>
#include<stdlib.h>

void push(int);
void print();
int pop();
int peek();
int isFull();
int isEmpty();

int top = -1;
#define MAX 10
int stack_arr[MAX];