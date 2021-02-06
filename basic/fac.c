#include<stdio.h>
int main()
{
        int i,n,fac=1;
            printf("enter integer ");
            scanf("%d",&n);
            if (n<0)
            {
              printf("Negative number doesn't have factorial");
             }
               else
              {
                  for ( i = 1; i <= n; ++i)
                  {
                     fac= fac*i; 
                  }
                  printf("factorial is %d",fac);  
              } 
               return 0;
}