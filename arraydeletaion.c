#include<stdio.h>
int main()
{
    int a[50],size,pos;
    int i;
    printf("Enter the value of size\n");
    scanf("%d",&size);
    for( i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position which element you want to delete\n");
    scanf("%d",&pos);
    for(i= pos-1;i<size-1;i++){
    a[i] = a[i+1];
    }
    size --;
    for( i=0;i<size;i++){
        printf("%d,",a[i]);
    }

}