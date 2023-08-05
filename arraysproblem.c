#include<stdio.h>
int main(){
    int a[10],num,pos,n;
    printf("Enter the size of arrays\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements are-\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    // Insertation the element in arrays
    printf("Enter the position\n");
    scanf("%d",&pos);
   // printf("Enter the number\n");
    //scanf("%d",&num);
   /* for(int i = n;i<pos;--i){
        a[i+1] = a[i];
    }
    a[pos-1] =num;
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }*/
    // Deletation of elements
    for(int i = pos-1 ;i<n; i++){
        a[i]=a[i+1];
    }
    n--;
    printf("After the deletation\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    //



}