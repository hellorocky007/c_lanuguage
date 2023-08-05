#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
int x;
void push(){
    printf("Enter the elemets\n");
    scanf("%d",&x);
    if(top==N-1){
        printf("Stack is oveflow\n");
    }else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    int item;
    if(top==-1){
        printf("Stack is underflow\n");
    }{ 
        item = stack[top];
        top--;
        printf("%d\n",item);
    }
}
void peak(){
    if(top==-1){
        printf("Stack is empty\n");
    }else{
        printf("%d\n",stack[top]);
    }
}
void display(){
    printf("The elements are\n");
    for(int i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}