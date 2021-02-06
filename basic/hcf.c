#include<stdio.h>
int main()
{
     int i,n1,n2,hcf;
     printf("enter integer ");
     scanf("%d %d",&n1,&n2);
     for (i= 1; i<=n1 && i<=n2; ++i)
     { if (n1%i==0 && n2%i==0)
      hcf=i;
     }
     printf("hcf of %d %d is %d",n1,n2,hcf);
     return 0;
}