#include<stdio.h>
int main(){
    int n,count1=0,count2=0,num[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&num[i]);
        if(num[i]>0){
            printf("%d\t",num[i]);
        }else if(num[i]<0){
            printf("%d\t",num[i]);
        }
    }
}