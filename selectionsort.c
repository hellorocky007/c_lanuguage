#include<stdio.h>
void Selectionsort(int a[],int n);
void Selectionsort(int a[],int n){
    int temp;
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
for(int i=0;i<n;i++){
    printf("%d\t",a[i]);
}
}
int main(){
    int n,a[10],i;
    printf("Enter the size of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
     for( i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
    printf("The sorted elements are-\n");
    Selectionsort(a[i],n);
}