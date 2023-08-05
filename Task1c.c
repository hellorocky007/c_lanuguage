#include<stdio.h>
int main(){
    int a[10],n,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements-\n ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // finding sum
    for(int i=0;i<n;i++){
        sum = sum+a[i];
    }
    for(int i=0;i<n;i++){
        printf("%d\t",sum-a[i]);
    }

}