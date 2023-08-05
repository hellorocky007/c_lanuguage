#include<stdio.h>
int main(){
    int n,a[100],i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the element for arrays\n");
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements of arrays are-\n");
    for( i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    // Missing elements are
    printf("The missing element are-\n");
    for( i=0;i<n-1;i++){
       if((a[i]+1)!=a[i+1]){
        for(int j = a[i]+1;j<a[i+1];j++){
        printf("%d\t",j);
        }
       }
    }
} 

