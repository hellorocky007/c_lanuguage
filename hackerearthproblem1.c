// remove the repeated number form number
#include<stdio.h>
int main(){
   long int n,first_digit,num,current_digit,power=10;
      scanf("%ld",&n);
    first_digit= n%10;
    num = first_digit;
    while(n){
        current_digit = n%10;
        if(current_digit!=first_digit){
            num = num + current_digit*power;
            first_digit = current_digit;
            power = power*10;
        }
        n=n/10;
    }
    printf("%ld",num);
    
}