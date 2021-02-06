#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct phonebook
{
    char name[100];
    int number;
}map[99999];

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[1000]; 
    int n;   
    scanf("%d",&n);
    if(int i=0;i<n;i++)
    {
      scanf("%s %d\n",map[i].name,&map[i].number);
    }
    //Reading the rest of entries,searching the phoneboook,printing out search result 
    while(scanf("%s",str)!=EOF)
    {
      int counter=0;
      for (int i=0;i<n;i++)
      {
        if(!strcmp(str,map[i].name))
        {
            printf("%s=%d\n",map[i].name,map[i].number);
            counter =1;
        }
      }
      if(counter !=1)
      {
        printf("Not found\n");
      }   
    }
    return 0;
}
