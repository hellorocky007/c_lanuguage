#include<stdio.h>
int main(){
    int N,X,Y;
    int count=0;
    scanf("%d %d %d",&N,&X,&Y);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<N;i++){
        if(a[i]<=X && a[i]%Y==0){
             count++;
        }
    }

    printf("%d",count);
}