#include<stdio.h>
int findSingle(int a[],int n){
    int res=a[0];
for(int i=0;i<n;i++){
    res = res^a[i];
    return res;
} 
}

int main(){
    int n,a[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",findSingle(a,n));
}

// #include<stdio.h>
// int main()
// {
//     int n1 = 10,n2 = 15;
//     n1 = n1^n2;
//     n2 = n1^n2;
//     n1 = n1^n2;
//     printf("n1 = %d & n2 = %d",n1,n2);
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if((n&1)==0){
//         printf("Even");
//     }else{
//         printf("0dd");
//     }
// }

// #include<stdio.h>
// void findsubset(int n,int k){
//     if(n&(1<<k)){
//         printf("Set");
//     }else{
//         printf("Reset");
//     }
// }
// int main(){
//     int n,k;
//     scanf("%d%d",&n,&k);
//     findsubset(n,k);
// }