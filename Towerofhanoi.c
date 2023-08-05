#include <stdio.h>
#include <stdlib.h>
#define rep(i, m, n) for(int i=m;i<n;i++)

int main()
{
  int T; scanf("%d", &T);
  while(T--)
  {
    int n; scanf("%d", &n);
    int *R = (int *)malloc(n*sizeof(int));
    rep(i, 0, n) scanf("%d", &R[i]);
    
    int *S = (int *)malloc(n*sizeof(int));
    int len = 0;
    S[0] = R[0];
    len++;
    
    rep(i, 1, n)
    {
      if(R[i] < S[len-1]) S[len++] = R[i];
      
      else if(R[i] > S[0]) S[0] = R[i];
      
      else 
      {
        int j = 0;
        while (R[i] < S[j]) j++;
        S[j] = R[i];
      }
    }
    printf("%d\n", len);
  }
 
  return 0;
}

