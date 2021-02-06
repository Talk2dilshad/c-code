/*Approach : Here we are giving one string in input and 
then with the help of for loop we transfer the content 
of first array to the second array.*/

#include<stdio.h>
int main()
{
    char input[100],outpt[200];
    int i;
    printf("Enter the string to copy : ");
   
    fgets(input,sizeof(input),stdin);
   printf("Entered strings : %s",input);
   
   for ( i = 0; input[i] !='\0'; ++i)
   {
     outpt[i]=input[i];
   }
   outpt[i]='\0';
   printf("copied strings : %s",outpt);
 return 0;
}

