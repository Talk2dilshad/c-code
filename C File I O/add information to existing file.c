/*C program to read name and marks of n number of students
from and store them in a file. If the file previously exits, 
add the information to the file.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Student Name and marks 
    // loop counting and no. of student 
    
    int marks,i,num;
    char name[50];

    printf("Enter No. of Student : ");
    scanf("%d",&num);

    FILE *fptr;
    if((fptr=fopen("C:\\Student Record.txt","a"))==NULL)
    {
        printf("Error !");
        exit(1);
    }
     for(i = 0; i < num; ++i)
   {
      printf("For student%d\nEnter name: ", i+1);
      scanf("%s", &name);

      printf("Enter marks: ");
      scanf("%d", &marks);

      fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
   }

   fclose(fptr);
   return 0;
}
