/*
* Left shift <<
* Bits ORing  (Merging)
* Bits ANDing (Masking)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char string[300];
printf("Enter the sentence :");
gets(string);
int i;
int long H=0; int x=0;
for ( i = 0; string[i] <strlen(string); i++)
{
  x=1;
  x=x<<string[i]-97;
  if(H&x>0)
  {
    printf("%c is duplicate \n",string[i]);
  }
  else
  H=x|H;
}
}
