#include<stdio.h>

int main()
{
   int marks,num;
   char name[50];
 
   FILE *fptr;
   fptr=fopen("C:\\Student Record.txt","w");
   if(fptr==NULL)
   {
       printf("Error ! ");
       exit(1);
   }
    printf("Enter No. of Student : ");
    scanf("%d",&num);

    for (int i = 0; i < num; ++i)
    {
        printf("Enter Student %d Information : \nEnter Name : ",i+1);
        scanf("%s",&name);
        printf("Enter Marks Obtained : ");
        scanf("%d",&marks);
    
        fprintf(fptr,"\nDISPLAYING SAVED INFORMATION :\nStudent Name: %s Marks Obtained : %d",name,marks);

    }
    
fclose(fptr);

return 0;
}
