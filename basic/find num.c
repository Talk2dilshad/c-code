#include<stdio.h>
int main()
{
      int n1,n2,n3;
      printf("enter number");
      scanf("%d" "%d" "%d",&n1,&n2,&n3);
            // if n1 is greater than both n2 and n3, n1 is the largest
    if (n1 >= n2 && n1 >= n3)
      { 
             printf("%d is the largest number.", n1);

             // if n2 is greater than both n1 and n3, n2 is the largest
            if (n2 >= n1 && n2 >= n3)
       {
        printf("%d is the largest number.", n2);
       }
    // if n3 is greater than both n1 and n2, n3 is the largest
    else
    {
        printf("%d is the largest number.", n3);
    }
      }
      else
      {
            printf("try again");
      }
    return 0;
}