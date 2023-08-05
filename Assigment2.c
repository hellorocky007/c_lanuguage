#include<stdio.h>
int main(){
    int n,a,b,c;
    scanf("%d",&n);
    while(n){
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&b>c){
            printf("%d\n",b);
        }else if(a>b && c>b){
            if(a>c){
            printf("%d\n",c);
            }else
            { printf("%d\n",a);
                }
        }else if(b>a && a>b ){
            printf("%d\n",b);
        }else if(b>a && c>b){
            printf("%d\n",b);
        }else if(b>a && b>c){
            printf("%d\n",c);
        }
        n--;
    }
}