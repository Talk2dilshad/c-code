#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int num;
    FILE *fptr;
 fptr = fopen("C:\\program.txt","w");
 if(fptr == NULL)
 {
 printf("Error !");
 exit(1);
 }
 printf("Enter Number : ");
 scanf("%d",&num);
 
 printf("\nEntered Number : %d",num);

 fprintf(fptr,"%d",num);
 fclose(fptr);

 return 0;
}