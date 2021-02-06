#include <math.h>
#include <stdio.h>

int checkPrime(int n);
int checkamstrong(int n);
int main()
{ 
   int n,flag;
   printf("ENTER THE INTEGER");
   scanf("%d",&n);
   //check prime number
   flag=checkPrime(n);
   if(flag==1)
     printf("%d is prime number \n",n);
   else
     printf("%d is not prime number \n",n);


   // check Armstrong number
   flag = checkamstrong(n);
   if (flag == 1)
      printf("%d is an Armstrong number.", n);
   else
      printf("%d is not an Armstrong number.", n);

   return 0;
}
int checkPrime(int n)
{
   int i,flag;
   //code for non prime
   for ( i = 2; i <= n/2; i++)
   {
      if(n%i==0)
      {
         flag=0;
         break;
      }
   }
   return flag;
}
int checkamstrong(int n)
{
   
    int originalNum, remainder, count = 0, flag;
    double result = 0.0;
    //count integer
    for ( originalNum= n; originalNum !=0; count++)
    {
      originalNum= originalNum/10; 
    }
    for ( originalNum = n; originalNum !=0; originalNum/=10)
    {
      remainder=originalNum%10;
      result +=pow(remainder,count);
    }
    if (round(result) == n)
      flag = 1;
   else
      flag = 0;
   return flag;
}