#include <stdio.h>
int main()
{
    int n,i,t1 =0,t2 =1, fs;
    printf("enter the number of sequence ");
    scanf("%d", &n);
    printf("fibonacci series :");
 for (i = 1; i<= n; ++i) {
    printf("%d, ", t1);
    fs=t1+t2;
    t1=t2;
    t2=fs;
     }
  return 0;
}