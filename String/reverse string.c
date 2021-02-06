#include<stdio.h>
void reverse();
int main()
{
 printf("Enter the strings to reverse : ");
 reverse();
 return 0;
}
void reverse()
{
 char c;
 
 scanf("%c",&c);

 if(c != '\n')
 {
     reverse();
     printf("%c",c);
 }
}