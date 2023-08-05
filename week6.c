#include<stdio.h>
#include<string.h>
#include<conio.h>
void  reversestring(char *str1){
  int  temp;
  int n = strlen(str1);
  for(int i=0;i<n/2;i++){
    temp = str1[i];
    str1[i] = str1[n - i - 1];
    str1[n-i-1] = temp;

  }
}
int main(){
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
   reversestring(str1);
    str1[0] = 't';
    str2[0] = 't';
    int value = strcmp(str1,str2);
    if(value==0){
      printf("Yes");
    }else{
      printf("No");
    }
}