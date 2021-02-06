#include <stdio.h>
fib(int n)
{
  /* Declare an array to store Fibonacci numbers. */ 
   /* 0th and 1st number of the series are 0 and 1*/
   //take loop
   /* Add the previous 2 numbers in the series 
    and store it */
     int f[n+2];
     int i;
     f[0]=0;
     f[1]=1;
     for ( i = 2; i <= n; ++i)
     {
       f[i]=f[i-2]+f[i-1];
     }
     return f[n];
}
int main()
{
  printf("%d ",fib(9));
  getchar();
  return 0;
}