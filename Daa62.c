#include<stdio.h>
#include<math.h>
 long max( long area,long n){
    if(area>n){
        return area;
    }else{
        return n;
    }
}
int main(){
    int n;
     long area=0;
    scanf("%ld",&n);
    long a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int first = i;
        int count=0;
        for(int j=0;j<n;j++){
        if(a[j]>=a[first]){
            count++;
        }
        }
        area = max(area,count*a[i]);
       
    }
      printf("%ld",area);
   
}