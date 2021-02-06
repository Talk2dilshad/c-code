/* approach : ask user for strings. 
create loop to count char of that strings
remove all character by using loop(new) */
#include <stdio.h>
int main()
{
  char line[150];
  int i;
  printf("Enter the strings :");
  fgets(line,sizeof(line),stdin);

  for (int i = 0,j; line[i] !='\0'; ++i)
  {
while (!(line[i] >='a' && line[i] <='z') 
        && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0'))
{
  for (j = i; line[j] !='\0'; ++j)
  {
    line[j]=line[j + 1];
  }
  line[j]='\0';
 }
  }
printf("New strings : ");
puts(line);
return 0;
}