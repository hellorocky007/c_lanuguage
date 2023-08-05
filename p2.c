#include<stdio.h>
long int factorial(int n);
int main() {
    int n,x;
    scanf("%d",&x);
    while(x){
    scanf("%d",&n);
    printf("%ld\n", factorial(n));
    x--;
    }
    return 0;
}

long int factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}