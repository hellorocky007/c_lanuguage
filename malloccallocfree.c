#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int *ptr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        ptr[i] = i+1;
        printf("%d,",ptr[i]);
        
    }

}