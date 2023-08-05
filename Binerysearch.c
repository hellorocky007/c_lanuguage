#include<stdio.h>
int main(){
    int a[10],mid,i,n,x,first,last,flag;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array element in asceding order\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&x);
    first=0;
    last = n-1;
    while(first<=last){
        mid =(first+last)/2;
        if(x==a[mid]){
            flag=1;
            break;
        }else if(x>=mid){
            first = mid +1;
        }else{
            last = mid-1;
        }
    }
    if(flag==1){
        printf("Element are found at %d\t",mid+1);
    }else{
        printf("Element not found\n");
    }
}