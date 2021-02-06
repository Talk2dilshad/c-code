#include<stdio.h>
#include<math.h>
int main()
{
  int low, high, number, originalNumber, rem, count = 0;
  double result=0.0;
   
   printf("Enter the intervals : ");
    scanf("%d %d",&low,&high);
    printf("The amstrong no. between %d and %d : ",low,high);
    for ( number = low+1 ; number < high;++number)
    {  //counting the digit
        originalNumber = number;
        while(originalNumber!=0)
        {
         originalNumber/=10;
         ++count;
        }
      // result contains sum of nth power of individual digits
      originalNumber = number;
      while (originalNumber!=0)
      {
        rem=originalNumber%10;
        result +=pow(rem,count);
         originalNumber/=10;
      }
       if((int)result==number)
       {
        printf("%d ",number );
       }
     count=0;
     result=0;
    }
    return 0;
}