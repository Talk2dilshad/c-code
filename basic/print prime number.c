#include <stdio.h>
int main() {
   int low, high, i, flag;
   printf("enter the interval");
   scanf("%d %d",&low,&high);
   printf("prime number between %d and %d are:  ",low,high);
   while (low<high)
   {
      flag=0;
      // ignore less than 2
      if(low<=1){
      ++low;
      continue;}
    // checking non prime number
      for ( i = 2; i <= low/2; ++i)
      {
       if  (low%i==0)
       {
         flag=1;
         break;
       }
      }
      if(flag==0)
      printf("%d ",low);
      ++low;
   }
   return 0;
}