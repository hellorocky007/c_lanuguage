#include<stdio.h>
int main()
{
    int a[50],size,pos,num;
    printf("Enter the value of size of array\n");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("Enter the pos\n");
    scanf("%d",&pos);
    printf("Enter the number\n");
    scanf("%d",&num);
    for(int i = size;i>pos;--i){
        a[i+1]=a[i];
    }
    a[pos-1]=num ;
    for(int i=0;i<size;i++){
        printf("%d,",a[i]);
    }

}