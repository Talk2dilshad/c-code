#include <stdio.h>
struct student
{
    char name[50];
    int height;
};

int main()
{
   struct student s1[5],s2[5];
   FILE *fptr;
   int i;
   
   fptr=fopen("C:\\structure Array.txt","wb");
   for ( i = 0; i < 5; ++i)
   {
     fflush(stdin);
     printf("Enter Student Name : ");
     gets(s1[i].name);

     printf("Enter Height : ");
     scanf("%d", &s1[i].height);
   }

   fwrite(s1,sizeof(s1),1,fptr);
   fclose(fptr);
   
   printf("Saving ... \n\n");

   printf("Information saved...\n\n");

   printf("Displaying Information ==> \n\n");
   fptr=fopen("C:\\structure Array.txt","rb");
   fread(s2,sizeof(s2),1,fptr);
   for ( i = 0; i < 5; ++i)
   {
     printf("Name : %s Height : %d \n",s2[i].name,s2[i].height);
   }
   fclose(fptr);

}