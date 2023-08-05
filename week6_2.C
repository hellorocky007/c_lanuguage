#include<stdio.h>
void sortstring(int* W,int N){
    int min_i;
    for(int i=0;i<N-1;i++){
        min_i = i;
        for(int j=i+1;j<N;j++){
            if(W[j]<W[min_i]){
                min_i = j;
            }
        }
        int temp = W[min_i];
        W[min_i] = W[i];
        W[i] = temp;
    }
}
int main(){
    int N,K,sum1=0,sum2=0;
    scanf("%d %d",&N,&K);
    int W[N];
    for(int i=0;i<N;i++){
        scanf("%d",&W[i]);
    }
    sortstring(W,N);
    for(int j=0;j<K;j++){
        sum1 = sum1 + W[j];
    }
    for(int k = N;k>=N-K;k--){
        sum2 = sum2 + W[k];
    }
    printf("%d",sum2);
}