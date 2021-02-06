//using horner rule

#include <stdio.h>
double e(int x,int n)
{
    static double s=1;
    
    if(n==0)
    return s;
    s=1+x*s/n; 
    // x/n is integer typre return To get double multilply s behore hand
    return e(x,n-1);
}
int main()
{
  printf("%lf \n",e(1,10));
  return 0;
}