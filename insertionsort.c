#include<stdio.h>
int main(){
    int a[10],n,key,j,i,min,temp;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of arrays\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    /*for(i=0;i<n;i++){
         key = a[i];
         j=i-1;
         while(j>=0 && a[j]>=key){
            a[j+1]=a[j];
            j=j-1;
         }
         a[j+1]=key;
    }*/
    for(int i=0;i<n;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;;
            }
        }
        temp = a[min];
        a[min]= a[i];
        a[i]=temp;
    }
    printf("The sorted elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}