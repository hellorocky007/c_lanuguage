#include<stdio.h>
int findFactorial(int n){
    int i,fact = 1;
  while(i>0){
      fact = fact*(n-i);
      i++;
  }
    
}
int main(){
    int x,n;
    scanf("%d",&n);
    while(n){
        scanf("%d",&x);
        printf("%d",findFactorial(x));
        n--;
    }
    
}