#include<stdio.h>
#include<string.h>
int main(){
   char str[100],str1[100];
   int n;
   scanf("%s",str);
   n = strlen(str);
   while(n--){
    for(int i=0;i<n;i++){
        if(str[i]==str[i+1]){
            for(int j=i;j<n;j++){
            str[j]=str[j+2];
            str[j+1]=str[j+3];
            }
            n--;
        }
    }
   }
   
   printf("%d",strlen(str));
}