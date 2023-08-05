//Write a program which accepts a sequence of comma separated 4 digit binary numbers as its input and then check whether they are divisible by 5 or not. The numbers that are divisible by 5 are to be printed in a comma separated sequence.

//Example: Input: 0100,0011,1010,1001 Output: 1010
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int convert(long long n);
int main() {
long long a[10000];
int i,count=0;
    for(i=0;i<1000;i++)
    {
         scanf("%lld,",&a[i]);
     if(a[i]==0)
     {
         break;
     }
    
    else if(convert(a[i])%5==0){
        count++;
        if(count==1){
            printf("%lld",a[i]);
        }else{
            printf(",%lld",a[i]);
        }
    }
    }
    return 0;
}
int convert(long long n){
    int dec = 0,j=0,rem;
    while(n!=0){
        rem = n%10;
        n = n/10;
        dec = dec + rem*pow(2,j);
        ++j;
    }
    return dec;

}
//Write a program to square each odd number in a list. The list is input by a sequence of comma-separated numbers. Suppose the following input is supplied to the program:

//1,2,3,4,5,6,7,8,9
//Then, the output should be:
//1,9,25,49,81
/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int a[10000],i,s;
    for(i=0;i<1000;i++)
    {
         scanf("%d,",&a[i]);
     if(a[i]==0)
     {
         break;
     }
    else if(i==0&&(a[i]%2)!=0)
    {
        s=a[i]*a[i];
        printf("%d",s);
    }
       else if(a[i]%2!=0)
       {
         s=a[i]*a[i];
           printf(",%d",s);
       }
    }
    return 0;
}*/