#include<stdio.h>
int main()
{
    int yr;
    printf("Enter the year");
    scanf("%d",&yr);

    if (yr %400 == 0)
    {
        printf("leap year");

    }
    else if (yr %100 == 0)
    {
         printf("not a leap year");
    }
    else if (yr %4 == 0)
    {
          printf("leap year");  
    }
    else
    {
          printf("not a leap year");
    }    
        return 0;

    }