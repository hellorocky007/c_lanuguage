#include<stdio.h>
int main(){
    int a[100],temp[20],n,d;
    int k=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position\n");
    scanf("%d",&d);
    for(int i=d ;i<n;i++){
        temp[k] = a[i];
        k++;
    }
    for(int i=0;i<d;i++){
        temp[k]=a[i];
        k++;
    }
    for(int i=0;i<n;i++){
        a[i]= temp[i];
        printf("%d\t",a[i]);
    }
}