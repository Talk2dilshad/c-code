#include <stdio.h>
int main()
{
char c[100];
int i;
printf("Enter strings to calculate length : ");
fgets(c,sizeof(c),stdin);
for (i = 0; c[i] != '\0'; ++i);
 printf("The length of string is %d",i);
return 0;
}