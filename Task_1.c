#include<stdio.h>
#include<stdlib.h>
 int a[100],n,num,pos;
 void create();
 void display();
 void insert();
 void delete();
 void create(){
    printf("Enter the size of arrays\n");
    scanf("%d",&n);
    printf("Enter the element of arrays\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
 }
 void display(){
    printf("The element of arrays are-\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
 }
 void insert(){
    printf("Enter the position for new element :\n");
    scanf("%d",&pos);
    printf("Enter the element which you want to insert\n");
    scanf("%d",&num);
    for(int i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=num;
    n++;
 }
 void delete(){
    printf("Enter the pos of element to be deleted\n");
    scanf("%d",&pos);
    a[pos] = num;
    for(int i=pos-1;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
    printf("Deleted element is %d\n",num);

 }
 int main(){
    int ch;
    while(ch){
        printf("\n\n_______MENU____________\n");
        printf("1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:create();
            break;
            case 2:display();
            break;
            case 3: insert();
            break;
            case 4:delete();
            break;
            case 5:exit(0);
            break; 
            default :printf("INVALID CHOICE\n");
        }
    }
    return 0;
 }