#include<stdio.h>
int main(){
    int a[10],n,j,temp;
    printf("Enter the size of elements\n");
    scanf("%d",&n);
    printf("Enter the elments\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // insertion sort
    /*for(int i=0;i<n;i++){
        int key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1]=key;
    }*/
    // selection sort
    for(int i=0;i<n-1;i++){
    int min = i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[min]){
            min = j;
        }
    }
        temp = a[min];
        a[min]=a[i];
        a[i] = temp;   
    
}
    printf("Sorted element are\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    
}