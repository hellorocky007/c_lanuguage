#include<stdio.h>
#include<math.h>
int convert(int n);
int convert(int n){
     int dec=0,i=0,rem;
      while ( n!=0)  
    {  
        rem = n%10;
        n=n/10;
        dec = dec + rem*pow(2,i);
        ++i;
    }  
    return dec;
  }
  int main(){
    int n;
    scanf("%d",&n);
    printf("%d",convert(n));
    return 0;
}
