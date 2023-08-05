/*#include<stdio.h>
unsigned long long Findthefactorial( long long n);
int main(){
    unsigned long long n,x;
    scanf("%llu",&x);
  while(x){
    scanf("%llu",&n);
    printf("%llu\n",Findthefactorial(n));
    x--;
  }
  return 0;
}
unsigned long long Findthefactorial(  long long n){
    if(n>=1){
        return n*Findthefactorial(n-1);
    }else{
        return 1;
    }
}*/
#include<stdio.h>

int main()
{
    int t,n,a[200],l,m,k;
    scanf("%d",&t);
    while(t--)
    {
	    scanf("%d",&n);
        m=1;
        a[0]=1;
        for(int j=2;j<=n;j++)
        {
            l=0;
            for( k=0;k<m;k++)
            {
                a[k]=a[k]*j+l;
                l=a[k]/10;
                a[k]=a[k]%10;
            }
            while(l)
            {
	            a[k]=l%10;
                k++;
                m++;
                l=l/10;
            }
        }
        for(int i=m-1;i>=0;i--)
            printf("%d",a[i]);

        printf("\n");
    }
    return 0;
}