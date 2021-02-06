#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//*Algorithm
/*
*using backtracing method 
*pass the value {string,low,high index} to permutation func()
*call swap func() and exchange the value of (string+low) with (string+i)
*call the permutation func() again 
*again call swap func() so that their retain to orginal ones
*check if low and high index are equal then print the string
*/
void swap(char *x,char *y)
{
    char temp;
    temp= *x;
    *x = *y;
    *y=temp;
}
void permutation(char *str,int low,int high)
{
    int i;
    if(low==high)
    {
      printf(str);
      printf("\n");
    }
    else
    {
        for ( i = low; i <= high; i++)
        {
            swap((str+low),(str+i));
            permutation(str,low+1,high);
            swap((str+low),(str+i));
        }
        
    }  
}

int main()
{
    char str[20];
    scanf("%s",str);
    int n;
    n=strlen(str);
    permutation(str,0,n-1);
    return 0;
}