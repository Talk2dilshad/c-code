#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char a[100],ch;
  int count=0;
  printf("Enter the strings : ");
  fgets(a,sizeof(a),stdin);
  printf("Enter the character to finds its frequency");
  scanf("%c",&ch);
  
  for(int i=0; a[i] !='\0';i++)
  {
    if(ch==a[i])
    ++count;
  }
  printf("The frequency of %c is %d",ch,count);
  return 0;
}