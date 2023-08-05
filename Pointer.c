#include<stdio.h>
int main(){
    int val = 7;
    int *ptr = &val;
    int **dptr = &ptr;
    printf("val[%u] : val =%d\n",&val,val);
    printf("ptr[%u]:ptr=%u *ptr=%d\n", &ptr, ptr,*ptr);
    printf("dptr[%u] : dptr = %u *dptr = %u **dptr = %d\n", &dptr, dptr,*dptr,**dptr);
}