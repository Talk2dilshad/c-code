#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void func(char s[]);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[10000];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%s",s);
    func(s);
    }
}
   void func(char s[])
   {
     
     for (int i = 0; i < strlen(s); i++)
     {
        if(i%2==0)
        {
            printf("%c",s[i]);
        }
     }
     printf(" ");
      for (int i = 0; i < strlen(s); i++)
     {
        if(i%2!=0)
        {
            printf("%c",s[i]);

        }
        /* code */
     }
     printf("\n"); 
   }