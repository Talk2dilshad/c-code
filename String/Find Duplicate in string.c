#include <stdio.h>
#include <stdlib.h>
#define NO_OF_CHARS 256
void fillCharCounts(char *str, int *count) 
{ 
   int i; 
   for (i = 0;*(str+i);  i++) 
   count[*(str+i)]++; 
} 
void duplicate(char *str)
{
   int *count = (int *)calloc(NO_OF_CHARS,sizeof(int)); 
  fillCharCounts(str,count);
   // Print characters having count more than 0 
  int i; 
  for (i = 0; i < NO_OF_CHARS; i++) 
    if(count[i] > 1) 
     printf("%c ->%d \n", i,  count[i]); 
  free(count); 

  
}
int main()
{
 char str[100];
 fgets(str,sizeof(str),stdin);
 duplicate(str);
 getchar();
 return 0;
}
