#include <stdio.h>

int main(void) {
	int n,a,count1=0,count2=0;
	scanf("%d",&n);
	while(n--){
	    scanf("%d",&a);
	    if(a%2==0){
	        count1++;
	    }else{
	        count2++;
	    }
	}
	if(count1>count2){
	    printf("READY FOR BATTLE");
	}else{
	    printf("NOT READY");
	}
	return 0;
}

