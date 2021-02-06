#include<stdio.h>
int checkPrime(int n);
int main()
 {
   int n1,n2,on,flag;
   printf("enter the interval");
   scanf("%d %d",&n1,&n2);
   printf("prime number between %d and %d : ",n1,n2);
   for ( on = n1+1; on < n2; ++on)  //on mean orginal number
   {
       flag=checkPrime(on);
       if (flag==1)
            printf("%d ",on);
   }
     return 0;
 }

 int checkPrime(int n)
 { 
      int j,flag=1;
    for ( j = 2; j < n/2; ++j)
       {
           if(n%j==0)
         {
            flag=0;
            break;
         }
       }
   return flag;
}
